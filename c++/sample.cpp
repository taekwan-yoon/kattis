/*
-------------------------------------------------------
Problem: Count Doubles
-------------------------------------------------------
Description
Given an array of n positive integers and an integer m, count how many contiguous subarrays of exactly m elements have two or more even values.

For example, given the subarray 1 2 3 4 5 6 7 8 and m=3, the three subarrays 2 3 4, 4 5 6, and 6 7 8 each have at least two even values.
-------------------------------------------------------
Input
The first line of input consists of the size 1 <= n <= 10^3 of the array, followed by m < n, the subarray size. Then n positive integers, each at most 10^3, follow on the second line.
-------------------------------------------------------
Output
Output how many contiguous subarrays of m elements have at least two even elements.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int n, m;

    cin >> n >> m;

    int numbers[n];

    for (int i=0; i<n; i++){
        cin >> numbers[i];
    }

    int count = 0;
    int even_count;

    for (int i=0; i<=n - m; i++) {
        
        even_count = 0;

        for (int j=i; j<i+m; j++) {
            if (numbers[j] % 2 == 0) {
                even_count++;
            }
            if (even_count >= 2) {

                break;
            }

        }
        if (even_count >= 2){
            count++;
        }
    }

    cout << count;

    return 0;
}