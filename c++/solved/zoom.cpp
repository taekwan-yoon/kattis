/*
-------------------------------------------------------
Problem: Zoom
-------------------------------------------------------
Description
To determine whether your company is successful, your boss has to look at a long list of numbers! So many numbers, in fact, that they need some way to simplify the data. You came up with the idea to summarize the list by “zooming out”. How do you zoom out? Just discard everything except every kth number in the list, for some k <= 1. Now, you just have to implement the idea, and your company will surely be very successful!
-------------------------------------------------------
Input
The first line contains integers n and k, with 1 <= k <= n <= 10^5. The second lone contains n integers x1, x2, ..., xn describing the list of numbers. It is guaranteed that - <= 0 <= xi <= 2^30 for i = 1, ..., n.
-------------------------------------------------------
Output
Display the sequence z_k, x_2k, ..., x_qk where q = n/k
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int n, k;

    cin >> n >> k;

    int num_list[n];

    for (int i=0; i < n; i++) {
        cin >> num_list[i];
    }

    for (int i=k-1; i < n; i+=k) {
        cout << num_list[i] << ' ';
    }

    return 0;
}