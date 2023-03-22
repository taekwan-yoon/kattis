/*
-------------------------------------------------------
Problem: Baby Bites
-------------------------------------------------------
Description
Arild just turned 1 year old, and is currently learning how to count. His favorite thing to count is how many mouthfuls he has in a meal: every time he gets a bite, he will count it by saying the number out loud.
Unfortunately, talking while having a mouthful sometimes causes Arild to mumble incomprehensibly, making it hard to know how far he has counted. Sometimes you even suspect he loses his count! You decide to write a program to determine whether Arild’s counting makes sense or not.
-------------------------------------------------------
Input
The first line of input contains an integer n (1 <= n <= 1000), the number of bites Arild receives. Then second line contains n space-separated words spoken by Arild, the i’th of which is either a non-negative integer a_i (0 <= a_i <= 10 000) or the string “mumble”.
-------------------------------------------------------
Output
If Arild’s counting might make sense, print the string “makes sense”. Otherwise, print the string “something is fishy”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    bool validity = true; 
    int n;
    cin >> n;
    int bites[n];
    int correct_array[n];
    string bite;


    for (int i=0; i < n; i++) {
        cin >> bite;
        if (bite == "mumble") {
            bites[i] = i+1;
        } else {
            bites[i] = stoi(bite);
        }
    }

    for (int i=0; i < n; i++) {
        if (bites[i] != i+1) {
            validity = false;
            break;
        }
    }

    if (validity) {
        cout << "makes sense";
    } else {
        cout << "something is fishy";
    }

    return 0;
}