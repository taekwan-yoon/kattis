/*
-------------------------------------------------------
Problem: Viðsnúningur
-------------------------------------------------------
Description
Óskar is trying to learn Hebrew but he finds it hard to adjust to reading from right to left. In order for him to focus on the grammar he had the idea of reversing the text so he could read left to right. But it would take an inordinate amount of time to reverse the entire text. Thus he asked you to write a program for him that reverses text, so he can focus on learning Hebrew.
-------------------------------------------------------
Input
One line containing 1 to 1000 English letters and digits.
-------------------------------------------------------
Output
Print the line after it has been reversed so Óskar can read it.
-------------------------------------------------------
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    string original;

    cin >> original;

    string new_text = "";

    for (int i=original.length()-1; i >= 0; i--) {
        new_text += original[i];
    }

    cout << new_text;

    return 0;
}