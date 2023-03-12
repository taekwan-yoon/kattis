/*
-------------------------------------------------------
Problem: Above Average
-------------------------------------------------------
Input
The first line of standard input contains an integer 1 <= C <= 50, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100) of a student in the class.
-------------------------------------------------------
Output
For each case you are to output a line giving the percentage of students whose grade is above average, rounded to exactly 3 decimal places.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
    int C;
    int N;
    vector<float> percentages;
    cin >> C;
    for (int i=0; i < C; i++) {
        cin >> N;
        int marks[N];
        for (int j=0; j < N; j++) {
            cin >> marks[j];
        }
        int sum = 0;
        float average;
        for (int j=0; j< N; j++) {
            sum += marks[j];
            average = (float)sum/N;
        }
        int count = 0;
        for (int j=0; j<N;j++) {
            if (marks[j] > average) {
                count++;
            }
        }
        percentages.push_back((float)count/N);
    }

    for (auto i : percentages) {
        cout << setprecision(3) << fixed << i * 100 << "%\n";
    }


    return 0;
}
