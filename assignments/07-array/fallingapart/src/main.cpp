/*
Kattis - fallingapart
Arrays assignment A
Updated By: Robin Perryman
CSCI 111
Date: FIXME

Read and solve Falling Apart: https://open.kattis.com/problems/fallingapart

Algorithm:
		1. read string
*/

#include <iostream>
#include "fallingapart.h"
using namespace std;

int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_function();
        return 0;
    }
    // test argument

    int n;
    cin >> n;
    string pre;
    cin >> pre;
    n--;

    bool increasing=true, decreasing=false;
    while (n--){
        string name;
        cin>>name;
        if (pre.compare(name)>0){decreasing=false;}
        else if (pre.compare(name)>0){increasing=false;}
        pre=name;
    }
    if (increasing){cout<<"INCREASING"<<endl;}
    else if (decreasing){cout<<"DECREASING"<<endl;}
    else {cout<<"NEITHER";}

    return 0;
}
