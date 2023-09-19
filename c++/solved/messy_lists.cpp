/*
-------------------------------------------------------
Problem: Messy Lists
-------------------------------------------------------
Description
Doris has just started to program, and is participating in their first programming competition. She has encountered a problem that can be solved by sorting some cool integers. She decides to use the built-in sorting function in the revolutionary new programmering language Meowscript. However, the language isn’t completely finished and its sorting function seems to be a little buggy.

Help Doris determine how many elements are in the wrong index in the incorrectly sorted list of integers, compared to the same list if it had been properly sorted in increasing order.
-------------------------------------------------------
Input
The first row contains an integer N (1 <= N <= 10^6), the number of elements in the list. The second row contains the N integers 0 <= A_i <= 10^9 that make up the incorrectly sorted list.
-------------------------------------------------------
Output
Print one integer - the number of elements in the list that are in the wrong position.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int num;
    cin >> num;

    int numbers[num], numbers2[num];

    for (int i=0; i<num; i++){
        cin >> numbers[i];
    }

    for (int i=0; i<num; i++){
        numbers2[i] = numbers[i];
    }

    sort(numbers, numbers+num);

    int incorrect = 0;
    for (int i=0; i<num; i++){
        if (numbers[i] != numbers2[i]){
            incorrect += 1;
        }
    }

    cout << incorrect;

    return 0;
}