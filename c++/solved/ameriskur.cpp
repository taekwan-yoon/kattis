/*
-------------------------------------------------------
Problem: Amerískur vinnustaður
-------------------------------------------------------
Description
You have recently begun your job as a civil engineer, or “byggingarverkfræðingur” in Icelandic.

You spend most of your day designing road systems, but since you are in the United States of America, everything is measured in football fields.

You have decided to write a program to convert the measurements from football fields to kilometers.

You may assume 1 football field is 0.09144 kilometers.
-------------------------------------------------------
Input
The first line of the input contains one integer n (1 <= n <= 10^5), the length of the road in football fields.
-------------------------------------------------------
Output
The output should contain a single number on a single line, the length of the road in kilometers. The answer is considered correct if it has an absolute error less than 10^-5.
-------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    float football;

    cin >> football;

    cout << fixed << setprecision(5);
    cout << football * 0.09144;


    return 0;
}