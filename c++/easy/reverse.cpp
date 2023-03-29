/*
-------------------------------------------------------
Problem: Reverse
-------------------------------------------------------
Description
Little Jóna needs a program. The program should read integers and print them in reverse order. Jóna asks for your help.
-------------------------------------------------------
Input
The first line of input contains the integer n. Then comes a list of n integers, each on its own line.-------------------------------------------------------
Output
The list should be printed in reverse order of input.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int lst[n];
    for (int i=0; i < n; i++) {
        cin >> lst[i]; 
    }

    for (int i=sizeof(lst)/sizeof(lst[0]) - 1; i >= 0; i--) {
        cout << lst[i] << '\n';
    }

    return 0;
}