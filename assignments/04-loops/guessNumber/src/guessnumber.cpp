#include<iostream>
#include<cstdlib>
#include<ctime>
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
    int guess =0;
    cout << "Enter guess (1-20): ";
    cin >> guess;
    if (1 <= guess && guess <= 20){
        return guess;
    }
    // check if the input number is between 1-20

    else{
        cout << "Your number is not within the range of [1,20]. Try again: ";
        readNumber();
    }
    // take another input if outside parameters
}

int checkGuess(int random, int guess){
    if (guess > random)
        return 2;
    // guess too high
    else if (guess < random)
        return -1;
    // guess too low
    else
        return 0;
    // d('-')
}

int game(string name){
    int random, guess, check;
    // needed variables for game
    for (int i = 0; i < 6; i++){
        guess = readNumber();
        check = checkGuess(random, guess);
        // take and check the user's guess

        if (check = 2){
            cout << "Your guess is too high.";
        }
        else if (check = -1){
            cout << "Your guess is too low.";
        }
        // too high/low, should go back to start after

        else if (check = 0){
            cout << "Congratulaitons, " << name << "! You WIN!! You guessed my number in " << i+1 << " guesses.\nWould you like to play again? Enter [Y/y], anything else to quit.";
        }
    }
    return 0;
}