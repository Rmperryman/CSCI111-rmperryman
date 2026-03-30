#include <iostream>
#include <cassert>
#include "lineup.h"
using namespace std;

string answer(bool decreasing, bool increasing){
    if (increasing==true){return "INCREASING";}
        //cout<<"INCREASING"<<endl;}
        else if (decreasing==true){return "DECREASING";}
            //cout<<"DECREASING"<<endl;}

        else if(increasing==false && decreasing==false){return "NEITHER";}
        //return "NEITHER";
}

void test_function(){
    string ans, expected;
    bool decreasing, increasing;
    

    decreasing=false;
    increasing=false;
    ans=answer(decreasing, increasing);
    expected=="NEITHER";
    assert (ans==expected);
    // test case 1

    decreasing=true;
    increasing=false;
    ans=answer(decreasing, increasing);
    expected=="DECREASING";
    assert (ans==expected);
    // test case 2

    decreasing=false;
    increasing=true;
    ans=answer(decreasing, increasing);
    expected=="INCREASING";
    assert (ans==expected);
    // test case 3

    decreasing=false;
    increasing=false;
    ans=answer(decreasing, increasing);
    expected=="NEITHER";
    assert (ans==expected);
    // test case 4
}