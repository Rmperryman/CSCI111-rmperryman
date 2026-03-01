/*
    TODO
    - kattis cli broken for some reason
    - comments
    - finish makefile
    - add screenshots
    - unit testing
    - 4 more in/out files
    - kattis submit
*/

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


int main(){
    int a, b, c;
    cin>>a>>b>>c;
    fizzbuzz(a, b, c);
    return 0;
}