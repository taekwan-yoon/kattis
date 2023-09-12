/*
-------------------------------------------------------
Problem: Eye of Sauron
-------------------------------------------------------
Description
Little Elrond is obsessed with the Lord of the Rings series. Between lectures he likes to doodle the central tower of the great fortress Barad-dûr in the margins of his notebook. Afterward, he always double checks his drawings to ensure they are accurate: with the Eye of Sauron located in the very center of the tower. If any are incorrect, he makes sure to fix them.

You are to write a program that reads a representation of his tower, and ensures that the drawing is correct, with a properly centered eye.
-------------------------------------------------------
Input
Input consists of a single string of length n, where 4 <= n <= 100. Input strings will consist only of three types of characters: vertical bars, open parentheses, and closing parentheses. Input strings contain one or more vertical bars followed by a set of matching parentheses (the “eye”), followed by one or more vertical bars. For a drawing to be “correct”, the number of vertical bars on either side of the “eye” must match. Input will always contain a pair of correctly matched parentheses, with no characters between them. No other characters will appear in the string.
-------------------------------------------------------
Output
On a single line print the word “correct” if the drawing is accurate or the word “fix” if there is an error that needs addressing.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string eye;
    cin >> eye;

    int size = eye.size();

    string first, second;

    first = eye.substr(0, size/2);
    second = eye.substr(size/2, size/2);

    if (size % 2 != 0) {
        cout << "fix";
    } else if (first.substr(0, first.size() - 1) == second.substr(1, second.size() - 1) && first[first.size() - 1] == '(' && second[0] == ')') {
        
        cout << "correct";
    } else {
        cout << "fix";
    }


    return 0;
}