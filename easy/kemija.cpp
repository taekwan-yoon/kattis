/*
-------------------------------------------------------
Problem: Kemija
-------------------------------------------------------
Description
Luka is fooling around in chemistry class again! Instead of balancing equations he is writing coded sentences on a piece of paper. Luka modifies every word in a sentence by adding, after each vowel (letters ’a’, ’e’, ’i’, ’o’ and ’u’), the letter ’p’ and then that same vowel again. For example, the word “kemija” becomes “kepemipijapa” and the word “paprika” becomes “papapripikapa”. The teacher took Luka’s paper with the coded sentences and wants to decode them.

Write a program that decodes Luka’s sentence.
-------------------------------------------------------
Input
The coded sentence will be given on a single line. The sentence consists only of lowercase letters of the English alphabet and spaces. The words will be separated by exactly one space and there will be no leading or trailing spaces. The total number of character will be at most 100.
-------------------------------------------------------
Output
Output the decoded sentence on a single line.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string line;
    string new_string = "";
    getline(cin, line);

    for (int i=0; i < line.size(); i++) {
        new_string += line[i];
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            i += 2;
        }
    }
    cout << new_string;


    return 0;
}