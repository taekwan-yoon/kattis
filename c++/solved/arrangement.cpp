/*
-------------------------------------------------------
Problem: Arrangement
-------------------------------------------------------
Description
One of the things that programming competition organizers have to do is decide which team should be in which room. There are N rooms and M teams. The rooms are similar in size, so it is best for teams to be divided into rooms as evenly as possible. For example, if there are N = 3 rooms and M = 8 teams, then it is best to put 3 teams in one room, 3 teams in another room, and then the last 2 teams in the last room.
-------------------------------------------------------
Input
The input consists of two lines. On the first line is an integer N, and on the second line is an integer M.
-------------------------------------------------------
Output
The output should contain N lines, one for each room. If k teams are to be in room number i, then line i should contain k copies of the * symbol.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N, M;
    cin >> N >> M;

    int q, r;

    q = M/N;
    r = M%N;

    for (int i=0; i < N; i++) {
        for (int j=0; j < M/N ; j++){
            cout << '*';            
        }
        if (r > 0) {
            cout << '*';
            r--;
        }
        cout << '\n';
    }

    return 0;
}