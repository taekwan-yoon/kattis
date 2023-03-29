/*
-------------------------------------------------------
Problem: 99 Problems
-------------------------------------------------------
Description
Ingrid is the founder of a company that sells bicycle parts. She used to set the prices of products quite arbitrarily, but now she has decided that it would be more profitable if the prices end in 99.

You are given a positive integer N, the price of a product. Your task is to find the nearest positive integer to N which ends in 99. If there are two such numbers that are equally close, find the bigger one.
-------------------------------------------------------
Input
The input contains one integer N (1 <= N <= 10^4), the price of a product. It is guaranteed that the number N does not end in 99.
-------------------------------------------------------
Output
Print one integer, the closest positive integer that ends in 99. In case of a tie, print the bigger one.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int start = 99;
    vector<int> prices;
    vector<int> potential_prices;
    if (N < 149) {
        cout << 99;
        return 0;
    }
    do {
        prices.push_back(start);
        start += 100;
    } while (start <= N + 50);

    for (int i = 0; i < prices.size(); i++) {
        if (abs(N - prices[i]) <= 50) { 
            potential_prices.push_back(prices[i]);
        }
    }

    if (potential_prices.size() == 2) {
        cout << potential_prices[1];
    } else {
        cout << potential_prices[0];
    }
    return 0;
}