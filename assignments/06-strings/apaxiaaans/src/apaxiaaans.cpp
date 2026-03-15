#include <iostream>
#include <cassert>
#include "apaxiaaans.h"
using namespace std;

string convert(string name){
    string ans = string(1, name[0]);
    for (int n=1 ; n<name.size() ; n++)
    {
        if (name[n] != name[n-1])
        {
            ans += string(1, name[n]);
        }
    }
    return ans;
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