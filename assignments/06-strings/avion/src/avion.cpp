#include <iostream>
#include <cassert>
#include "avion.h"
using namespace std;

bool readreg(const string regcode)
{
    if (regcode.find("FBI")!=string::npos)
    // find the string "FBI"
        {
            return true;
        }
    else return false;
    // false if "FBI" is not found
}


void test_readreg()
{
    string answer, expected, regcode;

    regcode = "N-FBI1";
    answer=readreg(regcode);
    expected = true;
    assert(answer==expected);
    //test case 1

    regcode = "I-NTERPOL";
    answer=readreg(regcode);
    expected = false;
    assert(answer==expected);
    //test case 2

    regcode = "F-BI-12";
    answer=readreg(regcode);
    expected = false;
    assert(answer==expected);
    //test case 3

    regcode = "13A-FBILL";
    answer=readreg(regcode);
    expected = true;
    assert(answer==expected);
    //test case 4
}