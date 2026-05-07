/*
Final Assignment
Updated By: Robin Perryman
CSCI 111
Date: 

create a program to check password strength

Algorithm:
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include "passcheck.h"
using namespace std;

int main(int argc, char **argv){

    string password,strength;
    int passlen, pass_score;

    cout<<"Enter your password: "<<endl;
    cin>>password;
    passlen=password.length();

    // reject if on word list
    if(isvalid(password)==false)
    {
        cout<<"Password invalid"<<endl;
        cout<<"Error: password is an invalid word or phrase"<<endl;
        return 0;
    }

    // reject if less than 8 characters
    if(sizeisvalid(password)==false)
    {
        cout<<"Password invalid"<<endl;
        cout<<"Error: password is too short (minimum of 8 characters)"<<endl;
        return 0;
    }

    //score
    pass_score=score(password, passlen);
    
    if(pass_score<3)
    {cout<<"Valid password! \nPassword strength: Bad"<<endl;}
    else if(pass_score==3)
    {cout<<"Valid password! \nPassword strength: Ok"<<endl;}
    else if(pass_score==4)
    {cout<<"Valid password! \nPassword strength: Strong"<<endl;}
    else if(pass_score==5)
    {cout<<"Valid password! \nPassword strength: Excellent"<<endl;}
    
    return 0;
}
