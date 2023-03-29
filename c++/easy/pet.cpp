/*
-------------------------------------------------------
Problem: Pet
-------------------------------------------------------
Description
In the popular show “Dinner for Five”, five contestants compete in preparing culinary delights. Every evening one of them makes dinner and each of other four then grades it on a scale from 1 to 5. The number of points a contestant gets is equal to the sum of grades they got. The winner of the show is of course the contestant that gets the most points.

Write a program that determines the winner and how many points they got.
-------------------------------------------------------
Input
Five lines, each containing 4 integers, the grades a contestant got. The contestants are numbered 1 to 5 in the order in which their grades were given.
-------------------------------------------------------
Output
Output on a single line the winner’s number and their points, separated by a space. The input data will guarantee that the solution is unique.-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    int point;
    int sum, max = 0, winner;

    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> point;
            sum += point;
        }
        if (sum > max) {
            max = sum;
            winner = i + 1;
        }
    }

    cout << winner << ' ' << max;

    return 0;

}