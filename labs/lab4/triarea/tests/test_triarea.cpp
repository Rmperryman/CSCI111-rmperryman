#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../../../doctest/doctest.h" // FIXME: adjust the path as needed
#include "../src/triarea.h"

TEST_CASE("Testing area_of_triangle function")
{
    SUBCASE("Test Case 1")
    {
        unsigned height = 10;
        unsigned base = 5;
        float expected = 25.0;
        float result = area_of_triangle(height, base);
        CHECK(result == doctest::Approx(expected).epsilon(MAX_ERROR));
    }
    SUBCASE("Test Case 2")
    {
        unsigned height = 6;
        unsigned base = 4;
        float expected = 12.0;
        float result = area_of_triangle(height, base);
        CHECK(result == doctest::Approx(expected).epsilon(MAX_ERROR));
    }
}

// FIXME3: Write 2nd test case with atleate 2 subcases #FIXED#
TEST_CASE("Testing area_of_triangle function"){
    SUBCASE("Test Case 3")
    {
        unsigned height = 300;
        unsigned base = 200;
        float expected = 30000;
        float result = area_of_triangle(height, base);
        CHECK(result == doctest::Approx(expected).epsilon(MAX_ERROR));
    }
    SUBCASE("Test Case 4")
    {
        unsigned height = 4;
        unsigned base = 0;
        float expected = 0;
        float result = area_of_triangle(height, base);
        CHECK(result == doctest::Approx(expected).epsilon(MAX_ERROR));
    }
}