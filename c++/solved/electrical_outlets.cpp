/*
-------------------------------------------------------
Problem: Electrical Outlets
-------------------------------------------------------
Description
Roy has just moved into a new apartment. Well, actually the apartment itself is not very new, even dating back to the days before people had electricity in their houses. Because of this, Roy’s apartment has only one single wall outlet, so Roy can only power one of his electrical appliances at a time.
Roy likes to watch TV as he works on his computer, and to listen to his HiFi system (on high volume) while he vacuums, so using just the single outlet is not an option. Actually, he wants to have all his appliances connected to a powered outlet, all the time. The answer, of course, is power strips, and Roy has some old ones that he used in his old apartment. However, that apartment had many more wall outlets, so he is not sure whether his power strips will provide him with enough outlets now.

Your task is to help Roy compute how many appliances he can provide with electricity, given a set of power strips. Note that without any power strips, Roy can power one single appliance through the wall outlet. Also, remember that a power strip has to be powered itself to be of any use.
-------------------------------------------------------
Input
Input vill start with a single integer 1 <= N <= 20, indicating the number of test cases to follow. Then follow N lines, each describing a test case. Each test case starts with an integer 1 <= K <= 10, indicating the number of power strips in the test case. Then follow, on the same line, O1, O2 ... Ok integers separated by single spaces, 2 <= Oi <= 10, indicating the number of outlets in each power strip.
-------------------------------------------------------
Output
Output one line per test case, with the maximum number of appliances that can be powered.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, K, O, sum;
    cin >> N;
    int results[N];

    for (int i=0; i < N; i++) {
        sum = 0;
        cin >> K;
        for (int j=0; j < K; j++) {
            cin >> O; 
            sum += O;
        }
        sum -= (K-1);
        results[i] = sum;
    }

    for (int i=0; i < N; i++){
        if (results[i] > 0) {
            cout << results[i] << '\n';
        } else {
            cout << 1;
        }
    }

    return 0;
}