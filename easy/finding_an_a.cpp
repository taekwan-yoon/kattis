/*
-------------------------------------------------------
Problem: Finding An A
-------------------------------------------------------
Description
In this problem, you are given a single string s that is guaranteed to contain the letter a.
You should output the suffix of s that begins with the first occurrence of the letter a. Namely, if s consists of characters s1s2...sn and i is the first index with si=a, then you should output the string sisi+1...sn.
Why do you want to do this? To solve a problem in the contest!
-------------------------------------------------------
Input
Input consists of a single line containing a single string s whose length is between 1 and 1000. The string is composed of lowercase letters with no spaces. You are guaranteed the letter a appears at least once in s.
-------------------------------------------------------
Output
Output the suffix of s that begins with the first occurrence of the letter a.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string word;
    cin >> word;
    int index;

    index = word.find('a');

    for (int i=index; i < word.size(); i++) {
        cout << word.at(i);
    }

    return 0;
}