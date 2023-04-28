/*
-------------------------------------------------------
Problem: Sticky Keys
-------------------------------------------------------
Description
Bob is texting Alice about his favourite programming problems, but he spilled coffee on his keyboard and now the keys get stuck when he types. The other day, he tried to tell her about the upcoming contest “UAPC”, but accidentally sent “UAAAAAPC” since his A key got stuck! Bob is an undergraduate so he can’t afford a new keyboard. He has asked you to write a program to correct his messages.

To make your life easier, Bob has agreed to avoid using messages with adjacent copies of the same letter (e.g., he won’t write about the “coffee” incident). So, you should always reduce duplicates down to a single character.
-------------------------------------------------------
Input
The input consists of a string S, where 1 <= |S| <= 1000, which is Bob's entire message to Alice. There may be multiple space-separated words in the message, so the entire string s including spaces should be considered part of the message.
The string S is guaranteed to only include upper and lower-case characters, digits, and spaces. Thankfully, the coffee did not reach Bob’s spacebar so there will never be multiple spaces in a row.
-------------------------------------------------------
Output
Output the message with repeated consecutive characters trimmed to a single character.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string old_string, new_string = "", previous, current;

    getline(cin, old_string);

    for (int i=0; i < old_string.size(); i++) {
        if (i == 0) {
            previous = old_string[i];
            new_string += previous;
        } else {
            current = old_string[i];

            if (current != previous) {
                new_string += current;
                previous = current;
            } else {
                continue;
            }
        }
    }

    cout << new_string;

    return 0;
}