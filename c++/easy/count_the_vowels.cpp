/*
-------------------------------------------------------
Problem: Count the Vowels
-------------------------------------------------------
Description
Given a line of text, count the vowels! For this problem, the only vowels are A, E, I, O and U, both upper and lower case. No other letters will be considered vowels for the purposes of this problem.
-------------------------------------------------------
Input
The single line of input contains a single string s(1 <= |s| <= 80), which consists of ASCII text, with no special characters. There will be only letters, numbers, printable symbols, and spaces. There will be no control characters, and the only white space will be the space character. The string s is guaranteed to have at least one non-whitespace character
-------------------------------------------------------
Output
Output a single line with a single integer, which is the number of vowels in s.
-------------------------------------------------------
*/
#include <iostream>
#include <cctype>

using namespace std;
int main() {
    string line;
    int count=0;
    getline(cin, line);

    for (int i = 0; i < line.size(); i++) {
        if (line[i] == 'a' || line[i] == 'A' ||line[i] == 'e' || line[i] == 'E' ||line[i] == 'i' ||line[i] == 'I' ||line[i] == 'o' ||line[i] == 'O' ||line[i] == 'u' ||line[i] == 'U' ){
            count++;
        }
    }
    cout << count;

    return 0;
}