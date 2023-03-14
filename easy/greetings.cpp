/*
-------------------------------------------------------
Problem: Greetings!
-------------------------------------------------------
Description
Now that Snapchat and Slingshot are soooo 2018, the teenagers of the world have all switched to the new hot app called BAPC (Bidirectional and Private Communication). This app has some stricter social rules than previous iterations. For example, if someone says goodbye using Later!, the other person is expected to reply with Alligator!. You can not keep track of all these social conventions and decide to automate any necessary responses, starting with the most important one: the greetings. When your conversational partner opens with he…ey, you have to respond with hee…eey as well, but using twice as many e’s!
Given a string of the form he…ey of length at most 1000, print the greeting you will respond with, containing twice as many e’s.
-------------------------------------------------------
Input
The input consists of one line containing a single string s as specified, of length at least 3 and at most 1000.
-------------------------------------------------------
Output
Output the required response.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    string greeting;
    cin >> greeting;

    int num_e;

    num_e = greeting.size() - 2;

    int new_size = num_e*2 + 2;
    char new_greeting[new_size]; 

    new_greeting[0] = 'h';
    new_greeting[new_size-1] = 'y';

    for (int i =1; i < new_size-1; i++) {
        new_greeting[i] = 'e';
    }

    for (int i=0; i < new_size; i++) {
        cout << new_greeting[i];
    }

    return 0;
}