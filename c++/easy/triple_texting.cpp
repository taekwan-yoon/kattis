/*
-------------------------------------------------------
Problem: Triple Texting
-------------------------------------------------------
Description
Julia enjoys talking to her grandma, playing with legos, and inventing two-player card games where she has a winning strategy. Recently however, she has not been able to talk to her grandma in person because of some kind of “pandemonium”. Instead, they have resorted to texting, which is a very slow process since grandma types very slowly and often mistypes letters. To make matters worse, grandma has started to write every word three times so that Julia can correct her mistypes. For example, if grandma wants to write the word “hello”, she will instead write “hellohellohello”. If she mistypes one of those letters, it might instead be sent as “hellohrllohello’.’

Your task is to write a program that given a message sent by grandma, where possibly one letter has been changed to some other letter, finds the original word.
-------------------------------------------------------
Input
The input consists of one string s containing lower case English letters (3 <= |s| <= 99). This is the message sent by grandma. It is guaranteed that this string is the result of a word being written three times, where possibly one letter was changed to some other letter.
-------------------------------------------------------
Output
Output one string t, the original word.
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cin >> s;

    int length = s.size() / 3;

    unordered_map<string, int> my_map;

    string first = s.substr(0, length);
    string second = s.substr(length, length);
    string third = s.substr(length*2, length);

    my_map[first]++;
    my_map[second]++;
    my_map[third]++;

    for (auto item : my_map) {
        if (item.second == 3 || item.second == 2){
            cout << item.first;
            break;
        }
    }

    return 0;
}