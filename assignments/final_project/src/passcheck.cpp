#include <iostream>
#include <fstream>
#include <iomanip>
#include "passcheck.h"
using namespace std;

bool sizeisvalid(string password){
    if(password.size()<8)
    {return false;}
    
    return true;
}

bool isvalid(string password){
    ifstream readfile("invalid_passwords.txt");
    // error case taken from example code
    if (!readfile) {
    cout << "Error opening input file.\n";
    return false;
    }
    string line;
    // string to store every line of text
    while(getline(readfile, line))
    {
        if(line.find(password)!=string::npos)
        {
            return false;
        }
    }
    return true;
}

int score(string password,int passlen){
    int score=1;
    bool haslower=false,hasupper=false,hasdigit=false;

    for(int i=0;i<passlen;++i){
        // if password contains lower case
        if(islower(password[i])){haslower=true;}
        // if password contains upper case
        if(isupper(password[i])){hasupper=true;}
        //if password contains digit
        if(isdigit(password[i])){hasdigit=true;}
    }

    // if password contains special character    
    if(password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890")!=string::npos)
    {score++;}
    if(passlen>10){score++;}
    if(haslower==true){score++;}
    if(hasupper==true){score++;}
    if(hasdigit==true){score++;}
    return score;
}