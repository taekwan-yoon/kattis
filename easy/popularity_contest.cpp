/*
-------------------------------------------------------
Problem: Popularity Contest
-------------------------------------------------------
Description
It’s not about what you know, but who you know. A famous saying – but is it true? You start looking around yourself, pondering what lies behind the success of some of your friends. Could it be that life is just one big popularity contest? Are all the hours you spend learning algorithms better used networking?

Slightly saddened by these thoughts, you realize that this is at least a question you can answer thanks to all those algorithm hours. Among your N friends, M pairs of them are friends with each other. You have ordered your friends in increasing order by how successful you think they are in life. For the i’th friend (starting from 
) in this order, we let i be their success factor. Similarly, we call the number of friends someone has their popularity factor P_i.

To investigate the matter, you decide to compute the marketability coefficient of each friend, defined as the difference between their popularity factor and success factor.
-------------------------------------------------------
Input
The first line contains an integer N (2 <= N <= 1000), the number of your friends, and M (0 <= M <= N(N-1)/2), the number of friendships.
The next M lines each contains one of the friendships, given as two integers 1 <= a != b <= N, denoting that the a'th and b'th of your friends are friends.
-------------------------------------------------------
Output
Output a single line with N integers – the marketability coefficients of all your friends.
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
    int N, M, a, b;
    cin >> N >> M;
    unordered_map<int, int> popularity;
    int coefficients[N];

    for (int i=0; i < N; i++) {
        popularity[i+1] = 0;
    }

    for (int i=0; i < M; i++) {
        cin >> a >> b;
        popularity[a]++;
        popularity[b]++;
    }

    for (int i=0; i < N; i++){
        coefficients[i] = popularity[i+1] - (i+1);
    }

    for (int i=0; i < N; i++){
        cout << coefficients[i] << ' ';
    }

    return 0;
}