#include <iostream>
#include "fizzbuzz.h"
#include <cassert>
using namespace std;

string fizzbuzz(const unsigned a, const unsigned b, const unsigned c){
        for (int i = 1; i<= c; i++){
        if (i%a==0 and i%b==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if (i%a==0){
            cout<<"Fizz"<<endl;
        }
        else if (i%b==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

void test_fizzbuzz(){
    unsigned a, b, c;
    string answer, expected;


    a = 1;
    b = 2;
    c = 2;

    answer=fizzbuzz(a,b,c);
    expected = "0";
    assert(answer==expected);

    cerr<<"All test cases passed\n";
}