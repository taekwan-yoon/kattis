/*
-------------------------------------------------------
Problem: I've been everywhere, man
-------------------------------------------------------
Description
Alice travels a lot for her work. Each time she travels, she visits a single city before returning home.
Someone recently asked her “how many different cities have you visited for work?” Thankfully Alice has kept a log of her trips. Help Alice figure out the number of cities she has visited at least once.
-------------------------------------------------------
Input
The first line of input contains a single positive integer T <= 50 indicating the number of test cases. The first line of each test case also contains a single positive integer n indicating the number of work trips Alice has taken so far. The following n lines describe these trips. The 
th such line simply contains the name of the city Alice visited on her ith trip.

Alice’s work only sends her to cities with simple names: city names only contain lowercase letters, have at least one letter, and do not contain spaces.

The number of trips is at most 100 and no city name contains more than 20 characters.
-------------------------------------------------------
Output
For each test case, simply output a single line containing a single integer that is the number of distinct cities that Alice has visited on her work trips.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;
int main() {
    int T, n;
    string city;
    set <string> cities;

    cin >> T;

    int *answers = new int[T];

    for (int i=0; i<T; i++) {
        cin >> n;
        cities.clear();
        for (int j=0; j < n; j++) {
            cin >> city;
            cities.insert(city);
        }
        answers[i] = cities.size();
    }

    for (int i=0; i < T; i++) {
        cout << answers[i] << '\n';
    }

    delete[] answers;

    return 0;
}