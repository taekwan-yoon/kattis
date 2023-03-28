/*
-------------------------------------------------------
Problem: Pokechat
-------------------------------------------------------
Description
The year is 2011, and you and your friend each got a copy of the newly released Pokemon Diamond and Pearl games. You enjoy playing the game together, but you can’t always be together and talk while you’re playing because your mom makes you come home after dark. This would be fine, except that the in-game chat functionality only allows for predetermined messages and you want to talk freely with your friend while you play. In order to be able to communicate any message, you and your friend come up with a simple code to convey characters to each other by displaying Pokemon using the game’s trading feature.
-------------------------------------------------------
Input
A string S of unique characters representing the encoding string, where each character is a printable ASCII character (note that the whitespace character could be in S). It is guaranteed that the length of S will be less than 100.
-------------------------------------------------------
Output
A non-empty message consisting only of characters found in the encoding string.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string S, id_num, final_string = "";
    getline(cin, S);
    cin >> id_num;
    int ind;

    for (int i=0; i < id_num.size(); i += 3) {
        ind = 0;
        ind = 100 * (static_cast<int>(id_num[i]) - '0') + 10 * (static_cast<int>(id_num[i+1]) - '0') + (static_cast<int>(id_num[i+2]) - '0') - 1;
        final_string += S[ind];
    }

    cout << final_string;

    return 0;
}