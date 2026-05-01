/*
Struct assignment
Updated By: Robin Perryman
CSCI 111
Date: 

create a program to read student grades and create a report into txt file

Algorithm:
1. get name of input file from user
2. open file and log info for each student
3. throw students into a list and sort by grade
4. make output file and create template
5. fill out template with all information
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <ranges>
#include "grading.h"
using namespace std;

struct student
{
    string fname, lname;
    int score[4];
    double avg;
    char lettergrade;
};

struct stats
{
    double average;
    int max, min;
};

/*
char gconvert(double average)
{   
    char v='F';
    if (average>=60)
        v='D';
    if (average>=70)
        v='C';
    if (average>=80)
        v='B';
    if (average>=90)
        v='A';
    return v;    
}
*/

bool comparison(const student & a, const student & b)
{
    return a.avg > b.avg;
}


int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_function();
        return 0;
    }
    // test argument

    vector<student> studentlist;
    vector<stats> statistics(4);
    int gradecount[6]={0}; 
    // counter for the letter grades A,B,C,D,E,F
    // E to be ignored later
    string inputfile,outputfile;

    //input prompt
    cout<<"Input file name: ";
    cin>>inputfile;

    ifstream readfile(inputfile);
    
    // error case taken from example code
    if (!readfile) {
    cout << "Error opening input file.\n";
    return 1;
    }

    // open file and fill out data for student struct
    student temp;
    while(readfile>>temp.fname>>temp.lname>>temp.score[0]>>temp.score[1]>>temp.score[2]>>temp.score[3])
    {
        temp.avg=(temp.score[0]+temp.score[1]+temp.score[2]+temp.score[3])/4;
        temp.lettergrade=gconvert(temp.avg);
        gradecount[temp.lettergrade-'A']++;

        studentlist.push_back(temp);
    }
    readfile.close();
    // close file and save data into vector

    // sort students by grade
    sort(studentlist.begin(), studentlist.end(), comparison);


    cout<<"Output file name: ";
    cin>>outputfile;

    // error case taken from example code
    ofstream writefile(outputfile);
    if (!writefile){
        cout << "Error opening output file.\n";
        return 1;
    }
    
    // copying format set in the example out file
    writefile
    <<setw(78)<<setfill('=')<<""<<setfill(' ')<<endl;    
    writefile
    <<setw(15)<<left<<"First Name" 
    <<setw(15)<<"Last Name"
    <<setw(8)<<right<<"T1"
    <<setw(8)<<"T2"
    <<setw(8)<<"T3"
    <<setw(8)<<"T4"
    <<setw(8)<<"Average"
    <<setw(8)<<"Grade"<<endl;
    writefile
    <<setw(78)<<setfill('=')<<""<<setfill(' ')<<endl;

    // filling out template made earlier with information read from input file
    for (const auto&s:studentlist)
    {
        writefile
        <<setw(15)<<left<<s.fname
        <<setw(15)<<s.lname
        <<setw(8)<<right<<s.score[0]
        <<setw(8)<<s.score[1]
        <<setw(8)<<s.score[2]
        <<setw(8)<<s.score[3]
        <<setw(8)<<fixed<<setprecision(2)<<s.avg
        <<setw(8)<<s.lettergrade<<endl;
    }
    writefile
    <<setw(78)<<setfill('*')<<""<<setfill(' ')<<endl;

    for(int i=0;i<4;i++)
    {
        statistics[i].average=accumulate(studentlist.begin(),studentlist.end(),0.0,[i](double sum,const student&temp)
        {return sum+temp.score[i];})/studentlist.size();
        
        statistics[i].max=max_element(studentlist.begin(),studentlist.end(), [i](const student&a, const student&b)
        {return a.score[i]<b.score[i];})->score[i];
        
        statistics[i].min=min_element(studentlist.begin(),studentlist.end(), [i](const student&a, const student&b)
        {return a.score[i]<b.score[i];})->score[i];
    }

    // stats for the entire class
    writefile
    <<setw(30)<<left<<"Class average: "<<right<<fixed<<setprecision(2)
    <<setw(8)<<statistics[0].average<<setw(8)<<statistics[1].average<<statistics[2].average<<setw(8)<<statistics[3].average<<endl;
    writefile
    <<setw(30)<<left<<"Class max: "<<right
    <<setw(8)<<statistics[0].max<<setw(8)<<statistics[1].max<<setw(8)<<statistics[2].max<<setw(8)<<statistics[3].max<<endl;
    writefile
    <<setw(30)<<left<<"Class min: "<<right
    <<setw(8)<<statistics[0].min<<setw(8)<<statistics[1].min<<setw(8)<<statistics[2].min<<setw(8)<<statistics[3].min<<endl;
    writefile
    <<setw(78)<<setfill('=')<<""<<setfill(' ')<<endl;

    // segment for whole class stats by letter grade
    for(int i=0;i<6;i++)
    {
        if (i==4)continue;
        // skip E grade
        gradecount[i]=(static_cast<double>(gradecount[i])/static_cast<double>(studentlist.size()))*100;
        string glabel= "Total "+string(1,'A'+i)+"s: ";
        writefile
        <<setw(26)<<left<<glabel<<right<<fixed<<setprecision(0)
        <<setw(4)<<gradecount[i]<<"%"<<endl;
    }
    writefile
    <<setw(78)<<setfill('=')<<""<<setfill(' ')<<endl;
    writefile.close();

    cout<<"Grade report finished generating successfully.\n";

    return 0;
}