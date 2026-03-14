#include<iostream>
#include<cstdlib>
#include<ctime>
#include"guessNumber.h"
#include <cassert>
using namespace std;

/*
    TODO
    - test functions
    - actually make it loop with userinput at end of game()
    - break loop in game() after user wins
*/

constexpr int MIN = 1;
constexpr int MAX = 20;
// limit int to 1-20

int randomNumber(){
    srand((unsigned int)time(NULL));
    // call srand with seed val to gen a new number each time the program runs
    // time returns current sys time
    int number = rand() % MAX;
    //number in range of 1-20

    return number;
}

int readNumber(){
    int guess = 0;
    for(;;){
        cout << "Enter guess (1-20): ";
        cin >> guess;
        if (1 <= guess && guess <= 20){
            return guess;
        }
        // check if the input number is between 1-20

        else{
            cout << "Your number is not within the range of [1,20]. Try again:\n";
        }
        // take another input if outside parameters
    }
}

int checkGuess(int random, int guess){
    if (guess > random)
        return 2;
    // guess too high
    else if (guess < random)
        return -1;
    // guess too low
    else if (guess == random)
        return 0;
    // d('-')
}

int game(){
    int random, guess, check;
    // needed variables for game
    random = randomNumber();
    for (int i = 0; i < 6; i++){
        guess = readNumber();
        check = checkGuess(random, guess);
        // take and check the user's guess
        if ((i>=5)){
            return 13;
        }
        //fail @ 6 attempts

        if ((check == 2)){
            cout << "Your guess is too high.\n";
        }
        else if ((check == -1)){
            cout << "Your guess is too low.\n";
        }
        // too high/low, should go back to start after

        else if ((check == 0)){
            return (i+1);
        }
        // return number of attempts made to win
    }
    return 0;
}

void test_checkGuess(){
    int random, guess, ans, expected;

    random = 10;
    guess = 12;
    ans = checkGuess(random, guess);
    expected = 2;
    assert((ans == expected));
    // test case 1

    random = 10;
    guess = 7;
    ans = checkGuess(random, guess);
    expected = (-1);
    assert((ans == expected));
    // test case 2

    random = 4;
    guess = 4;
    ans = checkGuess(random, guess);
    expected = 0;
    assert((ans==expected));
    // test case 3    
}