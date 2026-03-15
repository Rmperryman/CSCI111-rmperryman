/*
Kattis - Apaxiaaans
Strings assignment A
Updated By: Robin Perryman
CSCI 111
Date: 3/14/26

Read and solve Apaxiaaans!: https://open.kattis.com/problems/apaxiaaans

Algorithm:
		1. read string
        2. store input into variable
        3. create answer by copying characters from the input string one by one, skipping the characters which repeat
*/

#include <iostream>
#include "apaxiaaans.h"
using namespace std;

int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_convert();
        return 0;
    }
    // test argument


    string name;
    // declare input var
    cin >> name;
    // take input var
    cout << convert(name) << endl;
    // use convert function to make a string with no duplicates, then print that string
    return 0;
}
