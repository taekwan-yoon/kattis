/*
-------------------------------------------------------
Problem: Cinema Crowds 2
-------------------------------------------------------
Description
The United Cinema Crowd Association of Stockholm plans to have a showing of Old computer scientists and their pieings at the local KTH Royal Institute of Technology cinema.

Not until far too late did the auditor of the association point out that the board had booked far too many groups of visitors to the theater, which fits at most N visitors.

In total, M groups of visitors signed up for the showing. It was decided to let the groups enter the theater one at a time, in the same order in which they signed up for the showing. If there are too few empty seats when a group comes, admission to the theater will close and all groups still waiting to get in have to leave.

Given the sizes of all the visiting groups, determine how many groups will not be accepted into the theater.
-------------------------------------------------------
Input
The first line of the input contains the integers N (1 <= N <= 100) and M (1<= M <= 50), the number of seats in the theater and the number of visiting groups.

The second line contains M integers - the size of each visiting group in the order in which they signed up for the showing. A group consists of between 1 and 10 visitors. It is guaranteed that the total number of visitors exceeds N. 
-------------------------------------------------------
Output
Output a single number – the number of groups that will not be accepted to the showing.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N, M;

    cin >> N >> M;

    int groups[M];

    for (int i=0; i<M; i++){
        cin >> groups[i];
    }

    int not_allowed = M;

    for (int i=0; i<M; i++){
        if (N >= groups[i]){
            N -= groups[i];
            not_allowed -= 1;
        } else {
            break;
        }
    }

    cout << not_allowed;



    return 0;
}