#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../doctest/doctest.h" // FIXME: adjust the path as needed #FIXED#
#include "../src/twostones.h"

TEST_CASE("Testing odd_or_even function")
{
    SUBCASE("Sub Case 1: Odd number")
    {
        unsigned int number = 7;
        string expected = "odd";
        string result = odd_or_even(number);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 2: Even number")
    {
        unsigned int number = 10;
        string expected = "even";
        string result = odd_or_even(number);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 3: Odd number")
    {
        unsigned int number = 3;
        string expected = "odd";
        string result = odd_or_even(number);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 4: Even number")
    {
        unsigned int number = 4;
        string expected = "even";
        string result = odd_or_even(number);
        CHECK(result == expected);
    }
    // FIXME8: Write 3rd and 4th test cases for odd_or_even function #FIXED#
}

TEST_CASE("Testing answer function")
{
    SUBCASE("Sub Case 1: Odd number of stones")
    {
        unsigned int stones = 5;
        string expected = "Alice";
        string result = answer(stones);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 2: Even number of stones")
    {
        unsigned int stones = 8;
        string expected = "Bob";
        string result = answer(stones);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 3: Odd number of stones")
    {
        unsigned int stones = 181;
        string expected = "Alice";
        string result = answer(stones);
        CHECK(result == expected);
    }
    SUBCASE("Sub Case 4: Even number of stones")
    {
        unsigned int stones = 18;
        string expected = "Bob";
        string result = answer(stones);
        CHECK(result == expected);
    }
    // FIXME9: Write 3rd and 4th test cases for answer function #FIXED#
}
