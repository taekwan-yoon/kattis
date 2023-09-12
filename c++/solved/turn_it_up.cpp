/*
-------------------------------------------------------
Problem: Turn It Up!
-------------------------------------------------------
Description
Your volume control is at a comfortable 7 – not too high, not too low. Your friends entirely disagree, and frequently request you turn it up or turn it down, often in a somewhat inappropriate tone of voice.
Ever aiming to please, you try to accomodate their requests and increase or decrease the volume by one step accordingly. There arr 11 steps on your volume control: 0, 1, 2, and so on up to 10.

When the volume is set ot 0, you can't turn it further down and can ignore any misguided request to that effect. Similar,y you can't turn it up to more than 10. 

Where is your volume control after n requests? 
-------------------------------------------------------
Input
A single integer n on the first line, the number of requests.
The following n lines contain either "Skru up!" (Danish for "Turn it up!") or "Skru ned!" (Danish for "Turn it down!").
-------------------------------------------------------
Output
Write a single integer: The position of your volyme control after all n requests.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int initial = 7;

    int n; 
    cin >> n;

    string option1;
    string option2;

    for (int i=0; i < n; i++) {
        cin >> option1 >> option2;
        if (option2 == "op!" && initial < 10) {
            initial++;
        } else if (option2 == "ned!" && initial > 0) {
            initial--;
        }
    }

    cout << initial;

    return 0;
}