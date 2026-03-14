#include <iostream>
#include "fizzbuzz.h"
#include <cassert>
using namespace std;

string fizzbuzz(const int a, const int b, int i){
        if (i%a==0 and i%b==0){
            return "FizzBuzz";
        }
        else if (i%a==0){
            return "Fizz";
        }
        else if (i%b==0){
            return "Buzz";
        }
        else{
            string ans = to_string(i);
            return ans;
        }
}

void test_fizzbuzz(){
    unsigned a, b, i;
    string answer, expected;


    a = 4;
    b = 2;
    i = 16;

    answer=fizzbuzz(a,b,i);
    expected = "FizzBuzz";
    assert(answer==expected);
    //test case 1

    a = 1;
    b = 3;
    i = 1;

    answer=fizzbuzz(a,b,i);
    expected = "Fizz";
    assert(answer==expected);
    //test case 2

    a = 13;
    b = 3;
    i = 9;

    answer=fizzbuzz(a,b,i);
    expected = "Buzz";
    assert(answer==expected);
    //test case 3

    a = 1;
    b = 3;
    i = 6;

    answer=fizzbuzz(a,b,i);
    expected = "FizzBuzz";
    assert(answer==expected);
    //test case 4

    cerr<<"All test cases passed\n";
}