/*
-------------------------------------------------------
Problem: Distributing Poffins
-------------------------------------------------------
Description
Poffins are one of the most delicious treats that Pokemon love to eat. You want to reward your N Pokemon for their hard work in helping you become the Pokemon Champion, so you decide to buy M poffins and you lay them in a pile for all the Pokemon to take. Each Pokemon takes some amount of poffins (potentially even no poffins) until no poffins remain in the pile. However, you notice that some Pokemon didn’t end up getting as many poffins as others, so you set out to distribute the poffins more fairly. You line up your Pokemon in a certain order and go through them one by one until you reach the end of the line, repeating a specific process for each Pokemon in order as follows:

If the current Pokemon doesn’t have a poffin, skip the following steps and move on to the next Pokemon in the line.

Take one poffin from the current Pokemon.

Give that poffin to the Pokemon with the least number of poffins (it might be the same Pokemon you took the poffin from). If there are multiple Pokemon with the least number of poffins, you may pick any of them to give the poffin to.

After completing this process, you notice that the Pokemon with the most amount of poffins has P poffins and the Pokemon with the least poffins has p poffins. What is the minimum value of P - p over all possible ways the Pokemon initially took poffins?
-------------------------------------------------------
Input
The input consists of one line containing integers N and M. This denotes the number of Pokemon (2 <= N <= 10^7) and the total number of poffins (1 <= M <= 10^9)
-------------------------------------------------------
Output
Output a single line containing the minimum value of P - p
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    long long N, M;
    cin >> N >> M;

    if (M % N == 0) {
        cout << 0;
    } else {
        cout << 1;
    }

    return 0;
}