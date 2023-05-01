/*
-------------------------------------------------------
Problem: Avion
-------------------------------------------------------
Description
Mirko and Slavko are USKOK agents tracking the movements of an unnamed corrupt government official. Anonymous sources have tipped them about his upcoming escape attempt. They now know he plans to use his diplomatic liaisons to try and hitch a ride on a CIA blimp leaving from Severin na Kupi blimp port.

It is common knowledge that all CIA blimps have the string “FBI” somewhere in their registration codes. They obtained a list of all blimps scheduled for the designated day. There are exactly 5 blimps on the list. Write a program that will point out all CIA blimps.
-------------------------------------------------------
Input
There are exactly 5 rows of input, each row representing one blimp registration code from the list. A registration code is a sequence of at most 11 uppercase letters of the English alphabet, digits ‘0’ to ‘9’, or dashes ‘-’.
-------------------------------------------------------
Output
The first and only line of output must contain a space separated list of integers, sorted in increasing order, indicating the corresponding input rows containing registrations of CIA blimps.

If there are no CIA blimps, output the string “HE GOT AWAY!”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int iterations = 5;
    string airplane;
    int lists[iterations];
    int valid_count = 0;
    for (int i=0; i < iterations; i++){
        cin >> airplane;
        for (int j=0; j < airplane.size() - 2; j++){
            if (airplane[j] == 'F' && airplane[j+1] == 'B' && airplane[j+2] == 'I') {
                lists[valid_count] = i + 1;
                valid_count++;
            }
        }
    }
    if (valid_count == 0) {
        cout << "HE GOT AWAY!";
    } else {
        for (int i=0; i < valid_count; i++){
            cout << lists[i] << ' ';
        }
    }



    return 0;
}