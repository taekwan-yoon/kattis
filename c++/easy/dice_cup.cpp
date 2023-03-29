/*
-------------------------------------------------------
Problem: Dice Cup
-------------------------------------------------------
Description
Write a program to compute the most likely outcomes for the sum of two dice rolls. Assume each die has numbered faces starting at 1 and that each face has equal roll probability.
-------------------------------------------------------
Input
The input consists of a single line with two integer numbers, N, M, specifying the number of faces of the two dice. 
Constraints
4 <= N, M <= 20 Number of faces
-------------------------------------------------------
Output
A line with the most likely outcome for the sum; in case of several outcomes with the same probability, they must be listed from lowest to highest value in separate lines.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int sum_counts[N+M];

    for (int i=0; i < N+M; i++) {
        sum_counts[i] = 0;
    }

    for (int i=1; i <= N; i++) {
        for (int j=1; j <= M; j++) {
            sum_counts[i+j-1]++;
        }
    }

    int max = 0;
    for (int i=0; i < N+M; i++) {
        if (sum_counts[i] > max) {
            max = sum_counts[i];
        }
    }


    for (int i=0; i< N+M; i++) {
        if (sum_counts[i] == max) {
            cout << i+1 << '\n';
        }
    }


    return 0;
}