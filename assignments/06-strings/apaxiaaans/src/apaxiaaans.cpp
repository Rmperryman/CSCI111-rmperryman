#include <iostream>
#include <cassert>
#include "apaxiaaans.h"
using namespace std;

string convert(string name){
    string ans = string(1, name[0]);
    // make a variable from the first letter of input string
    for (int n=1 ; n<name.size() ; n++)
    // loop through the entire input string
    {
        if (name[n] != name[n-1])
        // check if each letter is the same character is not the same as the previous one
        {
            ans += string(1, name[n]);
            // if letter is unique compared to previous letter, add said letter to the answer variable
        }
    }
    return ans;
    // completed variable should just be each letter of the input var without duplicates
}

void test_convert(){
    string answer, expected, name;

    name = "Joon";

    answer=convert(name);
    expected = "Jon";
    assert(answer==expected);
    //test case 1

    name= "aaron";

    answer=convert(name);
    expected = "aron";
    assert(answer==expected);
    //test case 2

    name= "eueeeeeeeeeeeeeeeeeeeeee";

    answer=convert(name);
    expected = "eue";
    assert(answer==expected);
    //test case 3

    name= "wesley";

    answer=convert(name);
    expected = "wesley";
    assert(answer==expected);
    //test case 4

    cerr<<"All test cases passed\n";
}