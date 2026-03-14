/*
Kattis - FizzBuzz
Loops assignment B
Updated By: Robin Perryman
CSCI 111
Date: 2/28/26

Read and solve The Last Problem: https://open.kattis.com/problems/fizzbuzz

Algorithm:
		1. read input
        2. store into three variables (a,b,c)
        3. print all integers from 1-c
        4. replace numbers divisible by a with 'Fizz'
        5. replace numbers divisible by b with 'Buzz'
        6. replace numbers divisible by both with 'FizzBuzz'
*/

#include <iostream>
#include "fizzbuzz.h"
using namespace std;


int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_fizzbuzz();
        return 0;
    }
    // test argument

    int a, b, c;
    string ans;
    cin>>a>>b>>c;
    // read input
    for (int i=1; i<=c;i++)
    // loops c amount of times
    {
        ans=fizzbuzz(a, b, i);
        cout<<ans<<endl;
        // print answer
    }
    
    return 0;
}