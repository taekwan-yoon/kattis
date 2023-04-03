/*
-------------------------------------------------------
Problem: Boat Parts
-------------------------------------------------------
Description
Boating season is over for this year, and Theseus has parked his boat on land. Of course, the boat looks nothing like it did as of the beginning of the season; it never does. You see, Theseus is constantly looking for ways to improve his boat.

At every day of the boating season, Theseus bought exactly one type of item at his local supply store, and replaced the existing part on his boat with it. Now, as the season has ended, Theseus wonders what day he replaced all the parts from the previous season.
-------------------------------------------------------
Input
The first line of the input consists of two space-separated integers P and N, representing the number of parts the boat consists of, and the number of days in the boating season respectively. Then follows N lines, each line has a single word wi, the type of boat part that Theseus bought on day i.
-------------------------------------------------------
Output
Output the day Theseus ended up replacing the last existing part from the previous season, or paradox avoided if Theseus never ended up replacing all the different parts.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;
int main() {
    int P, N;
    cin >> P >> N;
    string part;
    set <string> parts;
    bool completed = false;
    int days;

    for (int i=0; i < N; i++) {
        cin >> part;
        parts.insert(part);

        if (!completed && parts.size() == P) {
            completed = true;
            days = i + 1;
        }
    }

    if (!completed) {
        cout << "paradox avoided";
    } else {
        cout << days;
    }


    return 0;
}
