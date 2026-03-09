#include <cmath>
#include "doggopher.h"

using namespace std;

// Function implementation
float distance(const float x1, const float y1, const float x2, const float y2)
{
    float dist = 2 * sqrt(pow(x1 - x2, 2)+pow(y1 - y2, 2));
    // FIXME4: Find the Eucledian distance between two points on 2-d coordiantes. #FIXED#
    // store the distance into the `dist` variable and return it
    return dist;
}
