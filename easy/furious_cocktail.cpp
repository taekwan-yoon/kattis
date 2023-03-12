/*
-------------------------------------------------------
Problem: A Furious Cocktail
-------------------------------------------------------
Description
In Minecraft, potions can be made and drank. When drank, they apply the corresponding potion effect to the player for some specified amount of time. “A Furious Cocktail” is the name of the advancement where a player has every potion effect applied at the same time. This is a challenging feat, as it takes time to drink each potion, and only one potion can be drank at a time.

Suppose that in your inventory, there are N unique potions that have a time duration of t1,...,tN seconds, respectively. Assuming that it takes T seconds to drink a potion, is it possible to have all N potion effects applied at the same time? Note that if one potion’s effect ends at the same time you finish drinking another potion, the potions are not considered to be applied at the same time.
-------------------------------------------------------
Input
The first line consists of 2 integers, 0 < N < 1 000 and 1 <= T <= 10, the number of potions in your inventory and time in seconds it takes to drink each potion, respectively. The next N lines each consists of an integer 1 <= ti <= 10^6, the time duration of the i-th potion where i ranges from 1 to N.
-------------------------------------------------------
Output
Output “YES” if it is possible to have all N potion effects applied at the same time, “NO” if otherwise.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    int N, T, temp;
    cin >> N >> T;
    int lst[N];

    for (int i=0; i < N; i++) {
        cin >> lst[i]; 
    }

    for (int i=0; i< N - 1; i++) {
        for (int j=i + 1; j< N; j++) {
            if (lst[i] < lst[j]) {
                temp = lst[i];
                lst[i] = lst[j];
                lst[j] = temp;
            } 
        }
    }
    
    if (lst[0] > T* (N-1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}