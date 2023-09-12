/*
-------------------------------------------------------
Problem: Adding Trouble
-------------------------------------------------------
Description
Your friend Bob is really bad at adding numbers, and he’d like some help to make sure he’s doing it correctly! Can you help Bob make sure he is adding correctly? Given 3 integers A, B, C, make sure that A + B = C, and that Bob indeed added A and B correctly.
-------------------------------------------------------
Input
The input consists of a single line with 3 integers A, B, C where -10^9 <= A, B, C <= 10^9
-------------------------------------------------------
Output
Output either correct! if A + B = C, or wrong! if A + B != C.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 + num2 == num3){
        cout << "correct!";
    } else {
        cout << "wrong!";
    }

    return 0;
}