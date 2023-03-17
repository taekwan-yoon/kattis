/*
-------------------------------------------------------
Problem: Cetvrta
-------------------------------------------------------
Description
Mirko needs to choose four points in the plane so that they form a rectangle with sides parallel to the axes. He has already chosen three points and is confident that he hasn’t made a mistake, but is having trouble locating the last point. Help him.
-------------------------------------------------------
Input
Each of the three points already chosen will be given on a separate line. All coordinates will be integers between 1 and 1000.
-------------------------------------------------------
Output
Output the coordinates of the fourth vertex of the rectangle.-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
    int x, y;
    unordered_map <int, int> xs;
    unordered_map <int, int> ys;
    int x_ans, y_ans;


    for (int i=0; i < 3; i++){
        cin >> x >> y;
        xs[x]++;
        ys[y]++;
    }

    for (auto i : xs) {
        if (i.second == 1){
            x_ans = i.first;
        } 
    }

    for (auto i : ys) {
        if (i.second == 1){
            y_ans = i.first;
        } 
    }

    cout << x_ans << ' ' << y_ans;

    return 0;
}