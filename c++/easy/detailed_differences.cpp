/*
-------------------------------------------------------
Problem: Detailed Differences
-------------------------------------------------------
Description
One of the most basic problems in information processing is identifying differences between data. This is useful when comparing files, for example. For this problem, write a program which identifies the differences between pairs of strings to make it easier for humans to see the differences.

Your program should identify those characters which differ between the two given strings in a visually striking way. Output the two input strings on two lines, and then identify the differences on the line below using periods (for identical characters) and asterisks (for differing characters). For example:
-------------------------------------------------------
Input
The first line of input contains an integer 1 <= n <= 500, indicating the number of test cases that follow. Each test case is a pair of lines of the same length, 1 to 50 characters. Each string contains only letters (a-z, A-Z) or digits (0-9).
-------------------------------------------------------
Output
For each test case, output the two lines in the order they appear in the input. Output a third line indicating similarities and differences as described above. Finally, output a blank line after each test case.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string first, second, new_string;
    int n;
    cin >> n;
    string lst[n*3];

    for (int i=0; i < n; i++) {
        new_string = "";
        cin >> first >> second;

        for (int j=0; j < first.size(); j++) {
            if (first[j] == second[j]) {
                new_string += ".";
            } else {
                new_string += "*";
            }
        }
        lst[i*3] = first;
        lst[i*3 + 1] = second;
        lst[i*3 + 2] = new_string;
    }

    for (int i=0; i < n*3; i++) {
        cout << lst[i] << '\n';

        if (i % 3 == 2) {
            cout << '\n';
        }
    }

    return 0;
}