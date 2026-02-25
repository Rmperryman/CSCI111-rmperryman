// Program to test functions defined in my_math.cpp file

#include <iostream>
#include <cmath>
#include <cassert>
#include "../src/my_math.h"
using namespace std;

const float EPSILON = 1e-6; // accuracy upto 6 decimal points

void test_square_root()
{
    float num = 16.0;
    float expected = 4.0;
    float result = square_root(num);
    assert(fabs(result - expected) <= EPSILON);
}

void test_cube_root(){
    float num = 27;
    float expected = 3;
    float result = cube_root(num);
    assert (fabs(result - expected)<= EPSILON);
}

void test_power_of_ten(){
    float num = 1;
    float expected = 1;
    float result = power_of_ten(num);
    assert (fabs(result - expected)<= EPSILON);
}

void test_log_base_2()
{
    float num = 1024;
    float expected = 10;
    float result = log_base_2(num);
    assert(fabs(result - expected) <= EPSILON);
}

void test_log_base_10(){
    float num = 100;
    float expected = 2;
    float result = log_base_10(num);
    assert (fabs(result - expected)<= EPSILON);
}

void test_degree_to_radian(){
    float num = 1;
    float expected = (M_PI/180.0);
    float result = degree_to_radian(num);
    assert (fabs(result - expected)<= EPSILON);
}

void test_sine_of_radian(){
    float num = 1;
    float expected = 0.841470;
    float result = sine_of_radian(num);
    assert (fabs(result - expected)<= EPSILON);
}

void test_cosine_of_radian(){
    float num = 1;
    float expected = 0.54030230586;
    float result = cosine_of_radian(num);
    assert (fabs(result - expected)<= EPSILON);
}



// FIXME1 - define test functions fort rest of the functions defined in my_math. #FIXED#

int main()
{
    cerr << "My Math Library Test Runner" << endl;
    test_square_root();
    test_log_base_2();
    test_cosine_of_radian();
    test_cube_root();
    test_degree_to_radian();
    test_log_base_10();
    test_power_of_ten();
    test_sine_of_radian();
    test_square_root();
    // FIXME2: call the rest of the test functions #FIXED#
    cerr << "All test cases passed!" << endl;
    return 0;
}