/*
-------------------------------------------------------
Problem: Trip Odometer
-------------------------------------------------------
Description
A trip odometer can be used to record the distance driven on a single trip. You are very diligent: at the start of each trip you reset the trip odometer to read 0 and at the end of each trip you write down the distance travelled.
Thus, you maintain a list of distances (in kilometers) taken by all trips. Unfortunately, exactly one number from this list is spurious; you mistakenly recorded the length of one trip you took in another vehicle. You also forget which entry in your list corresponds to this trip.
You want to know all possible total distances that you could have taken in your own vehicle given that one of the written distances was fake. More specifically, all values D such that it is possible to remove one trip from your list and have the remaining distances sum to D.
-------------------------------------------------------
Input
The first line of input contains a single integer N (2≤N≤10^5), the number of distances you wrote down. The second line of input consists of N integers d1,d2,…,dN (1≤di≤10^4), where di is the length of the ith trip you recorded.
-------------------------------------------------------
Output
Display two lines. The first line should contain a single number K, which is the number of possible distinct distances that could be obtained. The second line should contain the list of the K distinct integers, each of which is a possible sum that can be obtained by removing exactly one of the written distances. The list should be displayed in ascending order.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    int distance;
    int sum = 0;
    set<int> distances;
    set<int> differences;

    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> distance;
        sum += distance;
        distances.insert(distance);
    }

    for (int distance : distances){
        differences.insert(sum - distance);
    }

    cout << differences.size() << '\n';

    set<int>::iterator itr;

    int *distances_lst = new int[differences.size()];
    int count=0;

    for (itr=differences.begin(); itr != differences.end(); itr++) {
        distances_lst[count] = *itr;
        count++; 
    }

    for (int i=0; i < differences.size(); i++){
        if (i == differences.size() - 1) {
            cout << distances_lst[i];
        } else {
            cout << distances_lst[i] << ' ';
        }
    }

    delete[] distances_lst;

    *distances_lst = NULL;

    return 0;
}