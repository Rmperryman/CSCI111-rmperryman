/*
Kattis - Apaxiaaans
Strings assignment B
Updated By: Robin Perryman
CSCI 111
Date: 3/14/26

Read and solve Avion: https://open.kattis.com/problems/avion

Algorithm:
		1. read 5 inputs as the registration codes
        2. or each registration code, search the string for "FBI"
        3. if "FBI" is found output the place (1-5) in the list with the flagged code
        4. if no registration code is tagged output "HE GOT AWAY!"
*/

#include <iostream>
#include "avion.h"
using namespace std;

int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_readreg();
        return 0;
    }
    // test argument
    int tag = 0;
    // tag veriable which tracks if a registration code has been tagged
    string regcode;
    
    for (int i=0;i<5;i++)
    // loop for each of the 5 registration codes
    {
        cin >> regcode;
        if (readreg(regcode)==true)
        // if true then the current registration code has been tagged as containing "FBI"
        {
            cout << i+1 << " ";
            // output the index tagged registration code 
            tag++;
            // update tag variable
        }
    }
    if (tag==0)
    {
        cout << "HE GOT AWAY!" << endl;
    }
    // only output "HE GOT AWAY!" if no registration codes have been tagged
    return 0;

}