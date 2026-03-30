/*
Kattis - line them up
Arrays assignment B
Updated By: Robin Perryman
CSCI 111
Date: 3/30/26

Read and solve Line Them Up: https://open.kattis.com/problems/lineup

Algorithm:
		1. take input number as list of names
        2. iterate through list of names and compare alphabetical order of each name to the previous one.
        3. if every name is in ascending order, output INCREASING. if every name is in descending order, output DECREASING. if there is no order output NEITHER
    
*/

#include <iostream>
#include "lineup.h"
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
    // take number as length of the list of names

    string last;
    cin >> last;
    // first name on the list

    bool increasing, decreasing;
    increasing=true;
    decreasing=true;
    // counter to keep track of if the list is in order
    n--;
    while(n--){
    // loop through the entire list
        string name;
        cin >> name;
        // current name to be compared
    
        if (last.compare(name) < 0) {decreasing = false;} 
        else if (last.compare(name) > 0) {increasing = false;}
        // check alphabetical order of current name and the one before it, update counter as necessary
        last = name;
        // make current name into the previous one in order to move to the next name in the list
    }
    cout<<answer(decreasing, increasing)<<endl;
    // function to do final checks and actually output the answer

    return 0;
}
