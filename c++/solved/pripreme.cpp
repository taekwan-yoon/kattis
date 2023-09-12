/*
-------------------------------------------------------
Problem: Pripreme
-------------------------------------------------------
Description
Ante and Goran are preparing N teams of young ambitious students for a student programming competition of students from University of Zagreb. Both of them have one algorithm they have to explain to each team. Of course, both can’t work with the same team at the same time and none of them can work with multiple teams simultaneously.
You are given the time it takes for each team to understand and implement an algorithm. Each algorithm lecture has to be done without interruption. Determine the minimal time required for Ante and Goran to do their lectures!
For additional explanation, consult the sample test clarifications.
-------------------------------------------------------
Input
The first line of input contains the integer N, the number of teams.
The following line contains N space separated integers, where the i’th integer denotes the time required for the i’th team to understand and implement an algorithm.
All numbers in the input belong to the interval [1,3⋅10^5].
-------------------------------------------------------
Output
The first and only line of output must contain the required number from the task.
Clarification of the first example: Each team needs 2 units of time to understand and implement an algorithm. One of the possible schedules is that Ante gives his lectures to team 1, team 2 and team 3, respectively, and Goran to team 3, team 1 and team 2, respectively.
Clarification of the second example: One of the optimal schedules is that Ante gives lectures to team 2, team 3 and team 1, respectively, but with a pause lasting 1 unit of time between team 3 and team 1. Goran will give lectures to team 1, team 3 and team 2, respectively.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    long long N;
    long long sum = 0, max = 0, limited_sum, total;

    cin >> N;
    int nums[N], num;

    for (int i=0; i < N; i++) {
        cin >> num;
        sum += num;
        if (num > max) {
            max = num;
        }
    }

    limited_sum = sum - max;

    if (max > limited_sum) {
        total = sum + (max - limited_sum);
    } else {
        total = sum;
    }

    cout << total;

    return 0;
}