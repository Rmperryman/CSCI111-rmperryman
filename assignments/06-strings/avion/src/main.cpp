/*
Kattis - Apaxiaaans
Strings assignment B
Updated By: Robin Perryman
CSCI 111
Date: 3/14/26

Read and solve Avion: https://open.kattis.com/problems/avion

Algorithm:
		1. 
*/

#include <iostream>
#include "avion.h"
using namespace std;

int main(int argc, char **argv){
    if (argc > 1 && string(argv[1]) == "test")
    {
        test_avion();
        return 0;
    }
    // test argument
    return 0;
}