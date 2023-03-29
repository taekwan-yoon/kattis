/*
-------------------------------------------------------
Problem: Oktalni
-------------------------------------------------------
Description
Write a program that converts a binary numeral to octal so that Slavko can verify his results.
-------------------------------------------------------
Input
The input contains a binary numeral. The number of digits will be less than 100, and the first digit will be 1.
-------------------------------------------------------
Output
Output the number in octal.
-------------------------------------------------------
*/
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    string binary;
    cin >> binary;

    if (binary.size() % 3 == 1) {
        binary = "00" + binary;
    } else if (binary.size() % 3 == 2) {
        binary = "0" + binary;
    }

    int sum;
    int count = 0;
    int results[binary.size() / 3];
    for (int i=0; i < binary.size(); i += 3) {
        sum = 0;
        for (int j=0; j < 3; j++) {
            if (j == 0) {
                sum += (static_cast<int>(binary[i+j]) - '0') * 4;
            } else if (j == 1) {
                sum += (static_cast<int>(binary[i+j]) - '0') * 2;
            } else if (j==2) {
                sum += (static_cast<int>(binary[i+j]) - '0') * 1;
            }
        }
        results[count] = sum;
        count++;
    }

    for (int i=0; i < binary.size() / 3; i++) {
        cout << results[i];
    }

    return 0;
}