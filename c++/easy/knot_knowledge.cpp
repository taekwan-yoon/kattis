/*
-------------------------------------------------------
Problem: Knot Knowledge
-------------------------------------------------------
Description
Sonja the scout is taking a test to see if she knows all the knots a scout is supposed to know. The Scout’s Big Book of Knots has descriptions of 1000 different knots, conveniently numbered from 1 to 
1000. For the test, Sonja needs to learn a specific set of n of these knots. After some intense studying, she has learned all except one of them, but she has forgotten which knot she does not yet know.

Given the list of knots Sonja needs to learn, and the ones she has learned so far, find the remaining knot to learn.
-------------------------------------------------------
Input
The first line of input consists of an integer n (2 <= n <= 50), the number of knots Sonja needs to learn. This is followed by a line containing n distinct integers x1,...,xn(1 <= xi <= 1000), the knots that Sonja needs to learn. Finally, the last line contains n-1 distinct integers y1,...,yn-1(1 <= yi <= 1000), the knots that Sonja has learned so far. You may assume that each knot Sonja has learned is one of the n knots she was supposed to learn.
-------------------------------------------------------
Output
Output the number of the remaining knot that Sonja needs to learn.
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {

    int n, x, y;
    
    cin >> n;

    unordered_map<int, int> my_map;

    for (int i=0; i < n; i++) {
        cin >> x;
        my_map[x] = 0;
    }

    for (int i=0; i < n - 1; i++) {
        cin >> x;
        my_map[x]++;
    }

    for (auto item : my_map) {
        if (item.second == 0) {
            cout << item.first;
        }
    }

    return 0;
}