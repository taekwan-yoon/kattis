/*
-------------------------------------------------------
Problem: Don't Fall Down Stairs
-------------------------------------------------------
Description
King Whomp is walking down Whomp Fortress to fight Mario. In order to get down, he must descend down a staircase consisting of N steps. The height of every subsequent step is less than or equal to the step before (so that he can reach Mario at the end of the staircase).

However, King Whomp is injured these days, so he cannot walk down steps that have a height difference of more than 1. Thus, his Whomp underlings keep adjusting the staircase by removing one brick from the current step, which decreases the height of the current step by 1, or adding one brick to the next step to raise its height by 1 in order to keep their Majesty safe.

Every brick that the Whomps add or remove costs one unit of effort for them. Can you help them calculate the minimum amount of effort needed to help King Whomp walk from Whomp Fortress to Mario, who is on the ground at height 0?
-------------------------------------------------------
Input
The first line of the input is an integer N (1<= N <= 1 000 000), representing the number of steps.
The second line of input contains N space separated integers a_1, a_2, ..., a_n (1 <= a_i <= 1 000 000) representing the height of each step where a_1 >= a_2 >= ...a_n. Note that King Whomp needs to travel from the n-th step to the floor, which is at height 0.
-------------------------------------------------------
Output
Output one line containing a single integer E, the minimum effort of the Whomp underlings to guarantee King Whomp can safely walk down Whomp Fortress.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N;
    cin >> N;

    int steps[N+1];

    steps[N] = 0;

    for (int i=0; i<N; i++){
        cin >> steps[i];
    }



    int position = 0;
    int effort = 0;

    while (position != N){

        if(steps[position] - steps[position + 1] <= 1){
            position++;
        } else {
            steps[position] -= 1;
            effort++;
        }
    }

    cout << effort;

    return 0;
}