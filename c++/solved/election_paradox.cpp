/*
-------------------------------------------------------
Problem: Election Paradox
-------------------------------------------------------
Description
In Oddland, the leader of the country is determined by a democratic election. The country is divided into an odd number of regions, in which each region has an odd number of voters.

There are two (an even number!) political parties in Oddland, and the winning party is the one that wins the most number of regions. A party wins a region if it receives more votes than the other party in that region.

Under this system, it is possible that the losing party receives more votes than the winning party. For example, if there are three regions with 11, 3, and 3 people, respectively, then a party could receive 8, 1, and 1 votes and lose the election. In this case, the losing party received the majority of the votes in the total population. 

Determine the largest number of votes a party can receive and still lose the election.
-------------------------------------------------------
Input
The first line of input contains an odd integer N(3 <= N <= 999), which is the number of regions in Oddland.

The next line contains N odd integers p_i (1 <= p_i <= 999), which are the populations of the N cities.
-------------------------------------------------------
Output
Display the largest number of votes a party can receive and still lose the election.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int num;
    cin >> num;

    int votes[num];

    for (int i=0; i<num; i++){
        cin >> votes[i];
    }

    int region_to_win = num / 2;

    int len = sizeof(votes) / sizeof(votes[0]);

    sort(votes, votes + len, greater<int>());

    int sum = 0;

    for (int i=0; i<num; i++){
        if (i < region_to_win){
            sum += votes[i];
        } else {
            sum += votes[i] / 2;
        }
    }

    cout << sum;

    // for (int i=0; i<num; i++){
    //     cout << votes[i] << '\n';
    // }


    return 0;
}