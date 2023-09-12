/*
-------------------------------------------------------
Problem: Odd Man Out
-------------------------------------------------------
Description
You are hosting a party with G guests and notice that there is an odd number of guests! When planning the party you deliberately invited only couples and gave each couple a unique number C on their invitation. You would like to single out whoever came alone by asking all of the guests for their invitation numbers.
-------------------------------------------------------
Input
The first line of input gives the number of cases, N. N test cases follow. For each test case there will be:
    One line containing the value G the number of guests.

    One line containing a space-separated list of G integers. Each integer C indicates the invitation code of a guest.
-------------------------------------------------------
Output
For each test case, output one line containing “Case #x: ” followed by the number C of the guest who is alone.
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {

    int N, G, num;
    cin >> N;

    int odds[N];

    unordered_map<int, int> counts;

    for (int i=0; i < N; i++) {
        cin >> G;
        for (int j=0; j < G; j++) {
            cin >> num;
            counts[num]++;
        }

        for (auto guests : counts) {
            if (guests.second == 1) {
                odds[i] = guests.first;
            }
        }

        counts.clear();
    }

    for (int i=0; i < N; i++) {
        cout << "Case #" << i + 1 << ": " << odds[i] << '\n';
    }


    return 0;
}