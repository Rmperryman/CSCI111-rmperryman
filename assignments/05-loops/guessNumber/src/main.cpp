/*
Guess the number
Loops assignment B
Updated By: Robin Perryman
CSCI 111
Date: 2/28/26

make a number guessing game
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"guessNumber.h"
using namespace std;

constexpr int MIN = 1;
constexpr int MAX = 20;
// limit int to 1-20

int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_checkGuess();
        return 0;
    }
    // test argument

    string name;
    int attempts;
    char exit;
    for(;;){
        cout << "Welcome to -- Guess the Number -- game!\nWhat is your name?: ";
        cin >> name;
        cout << "Hello " << name << ". I am thinking of a number between 1 and 20.\nYou get 6 tries to guess the number. Take a guess" << endl;
        //greet user
    
        attempts = game();

        if ((attempts==13)){
            cout << "You lose..." << endl;
        }
        else{
            cout << "Congratulaitons, " << name << "! You WIN!! You guessed my number in " << attempts << " guesses.\n";            
        }
        cout << "Would you like to play again? [Y] to continue, anything else to exit\n";
        cin >> exit;
        if(!(exit=='Y'||exit=='y')){
            break;
        }
    }
    return 0;
}