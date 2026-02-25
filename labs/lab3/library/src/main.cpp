/*
Library Functions Lab
Updated By: [Your Name]
CSCI 111
Date: [Today's Date]

Program prompts user to enter a decimal number. It then finds various trig and mathematical values
of the number using library functions and prints the results using cstdio's printf function.

Algorithm:
    1. Prompt user to enter a decmial number
    2. Store the number into a variable
    3. Find and print various results form the number
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath> // various math functions: https://cplusplus.com/reference/cmath
#include "my_math.h"

using namespace std;

int main()
{
    double number, result, input_rad;

    cout << "Program calculates various results from a given number" << endl;
    cout << "Enter a decimal number: ";
    cin >> number;
    
    // Find ceiling of the number
    result = ceil(number);
    printf("ceiling(%f) = %.1f\n", number, result);
    
    // Find floor of the number
    result = floor(number);
    printf("Floor(%f) = %.1f\n", number, result);
    
    // FIXME4 - Find square root of the number and print the result with 4 decimal points
    result=square_root(number);
    printf("Square Root(%f) = %.4f\n", number, result);
    
    // FIXME5 - Find log base two of the number and print the result with 3 decimal points
    result=log_base_10(number);
    printf("Log base 10(%f) = %.3f\n", number, result);
    
    // Pretend the number is in degree, convert it to radian and print the result with 5 decimal points
    input_rad=degree_to_radian(number);
    
    // FIXME6 - Find sine of the number (in radian) and print the result with 5 decimal points
    result=sine_of_radian(input_rad);
    printf("Sin (%f) = %.5f\n", number, result);
    
    // FIXME7 - Find cosine of the number (in radian) and print the result
    result=cosine_of_radian(input_rad);
    printf("Cos (%f) = %.1f\n", number, result);
    
    // FIXME8 - Find power of ten of the number and print the result with no decimal points
    result=power_of_ten(number);
    printf("Power of ten(%f) = %.0f\n", number, result);


    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}
