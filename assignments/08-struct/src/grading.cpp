#include <iostream>
#include <cassert>
#include "grading.h"
using namespace std;

char gconvert(double average)
{   
    char v='F';
    if (average>=60)
        v='D';
    if (average>=70)
        v='C';
    if (average>=80)
        v='B';
    if (average>=90)
        v='A';
    return v;    
}

void test_function()
{

}