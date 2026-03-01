/*
Guess the number
Loops assignment B
Updated By: Robin Perryman
CSCI 111
Date: 2/28/26

make a simple number guessing game

Algorithm:
        1. get name and greet player
*/

/*
    TODO
    - add functions into main() after finished
    - play game again if user wants to
    - reveal random number at end of game

    - write 3 test cases for checkGuess() with assert
    - finish top bit and algorithm
    - add game() to the .h file

    - screenshots of all the testing stuff
    
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

constexpr int MIN = 1;
constexpr int MAX = 20;
// limit int to 1-20

int main(){
    string name;
    cout << "Welcome to -- Guess the Number -- game!\nWhat is your name?: ";
    cin >> name;
    cout << "Hello " << name << "I am thinking of a number between 1 and 20.\nYou get 6 tries to guess the number. Take a guess" << endl;
    //greet user
    return 0;
}