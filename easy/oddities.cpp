/*
-------------------------------------------------------
Problem: Oddities
-------------------------------------------------------
Description
Some numbers are just, well, odd. For example, the number 3 is odd, because it is not a multiple of two. Numbers that are a multiple of two are not odd, they are even. More precisely, if a number n can be expressed as n=2⋅k for some integer k, then n is even. For example, 6=2⋅3 is even.
Some people get confused about whether numbers are odd or even. To see a common example, do an internet search for the query “is zero even or odd?” (Don’t search for this now! You have a problem to solve!)
Write a program to help these confused people.
-------------------------------------------------------
Input
Input begins with an integer 1≤n≤20 on a line by itself, indicating the number of test cases that follow. Each of the following n lines contain a test case consisting of a single integer −10≤x≤10.
-------------------------------------------------------
Output
For each x, print either ‘x is odd’ or ‘x is even’ depending on whether x is odd or even.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int n, number;
    cin >> n;
    
    int *lst = new int[n];

    for (int i=0; i < n; i++) {
        cin >> number;
        lst[i] = number;
    }

    for (int i=0; i < n; i++) {
        if (lst[i] % 2 == 0){
            cout << lst[i] << " is even";
        } else {
            cout << lst[i] << " is odd";
        }
        if (i != n - 1) {
            cout << '\n';
        }
    }

    return 0;
}