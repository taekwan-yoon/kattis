/*
-------------------------------------------------------
Problem: N-Sum
-------------------------------------------------------
Description
Now one’s goose is cooked and the raw carrots are smoked!

Per-Magnus’ boss stormed into his office and complained about the addition program you had written for him previously. It can only add two numbers, which is of course completely unusable! How could you even come up with such a silly idea?

Fix your program posthaste, so that it instead sums up N integers for a given N.
-------------------------------------------------------
Input
The first line of the input contains an integer N (2 <= N <= 10), the number of integers your program should add. 
The next line contains the N integers to add, each between 0 and 1000.
-------------------------------------------------------
Output
Output a single integer - the sum of the N integers from the input.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, number, sum = 0;
    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> number;
        sum += number;
    }

    cout << sum;

    return 0;
}