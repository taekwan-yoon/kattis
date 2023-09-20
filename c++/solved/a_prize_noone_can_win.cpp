/*
-------------------------------------------------------
Problem: A Prize No One Can Win
-------------------------------------------------------
Description
After the festive opening of your new store, the Boutique store for Alternative Paramedicine and Cwakhsahlvereigh, to your disappointment you find out that you are not making as many sales as you had hoped. To remedy this, you decide to run a special offer: you will mark some subset of the n items for sale in your store as participating in the offer, and if people buy exactly two of these items, and the cost of these items is strictly more than X euros, you will give them a free complimentary unicorn horn!

Since you recently found out all your unicorn horns are really narwhal tusks, you decide to rig the offer by picking the participating items in such a way that no one can earn a horn anyway.

To make sure no one becomes suspicious, you want to mark as many items as possible as participating in the offer.
-------------------------------------------------------
Input
On the first line are two integers, 1 <= n <= 10^5, the number of items for sale in your store, and 1 <= X <= 10^9, the minimum cost specified in the statement.

On the second line are n positive integers, each at most 10^9. These are the prices of the items in the store.
-------------------------------------------------------
Output
Print the maximum number of items you can mark as part of your special offer, without anyone actually being able to receive a horn.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n, X;

    cin >> n >> X;

    int prices[n];

    for (int i=0; i<n; i++){
        cin >> prices[i];
    }

    sort(prices, prices+n);

    int num_sales = 1;

    if (n == 1){
        cout << 1;
    } else{
        for (int i=0; i<n-1; i++){
            if (prices[i] + prices[i+1] <= X){
                num_sales++;
            }
        }
        cout << num_sales;
    }

 
    return 0;
}