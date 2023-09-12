/*
-------------------------------------------------------
Problem: Rectangle Area
-------------------------------------------------------
Description
Given diagonal corners of a rectangle with sides parallel to the X and Y axes, compute the area of the rectangle.
-------------------------------------------------------
Input
The single line of input contains four real numbers x1, y1, x2, and y2 (|x1|. |y1|. |x2|. |y2| <= 100.0), where (x1, y1) and (x2, y2) are diagonal corners of a rectangle with sides parallel to the X and Y axes. The rectangle is guaranteed to have an area greater than 0.01.
-------------------------------------------------------
Output
Output a single line with a single real number, which is the area of the given rectangle. This number must be accurate to within 10^-2 absolute or relative error.
-------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    float x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(3) << abs((x2 - x1) * (y2 - y1));

    return 0;
}