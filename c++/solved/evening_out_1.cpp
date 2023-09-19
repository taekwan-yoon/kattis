/*
-------------------------------------------------------
Problem: Evening Out 1
-------------------------------------------------------
Description
Marika has two integers A and B. She wants A to be divisible by B. She can pay 1 coin to increase or decrease A by 1. What is the minimum number of coins she must pay?
-------------------------------------------------------
Input
The first and only line contains the integers A and B (1 <= A, B <= 10^18)
-------------------------------------------------------
Output
Output a single line with the minimum number of coins Marika must pay.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    long long A, B;   

    cin >> A >> B;

    long long upper = ((A / B) + 1) * B;

    long long lower = ((A / B)) * B;

    if (abs(upper - A) < abs(lower - A)){
        cout << abs(upper - A);
    } else {
        cout << abs(lower - A);
    }


    return 0;
}
