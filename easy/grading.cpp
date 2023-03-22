/*
-------------------------------------------------------
Problem: Grading
-------------------------------------------------------
Description
Per works at the KTH Royal Institute of Technology, and thus grades a lot of exams each day.

The grading process is rather simple. First, you define five grading limits a, b, c, d and e. At least a% of the exam score is required to get an A grade, at least b% is required for a B, and so on, and e& is required to get an E. If you get less than e% you get an F.

Per’s management has recently complained about a lot of mistakes that Per made during grading, so they want you to construct a program to help Per grade exams.
-------------------------------------------------------
Input
The first line of the input contains the five integers a, b, c, d, and e

The second line contains a single integer – the exam score in percent of an exam Per is currently grading.
-------------------------------------------------------
Output
Output a single letter A-F – the grade of the exam Per is currently grading.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int a, b, c, d, e, score;
    
    cin >> a >> b >> c >> d >> e >> score;

    if (score >= a) {
        cout << 'A';
    } else if (score >= b) {
        cout << 'B';
    } else if (score >= c) {
        cout << 'C';
    } else if (score >= d) {
        cout << 'D';
    } else if (score >= e) {
        cout << 'E';
    } else if (score < e) {
        cout << 'F';

    }


    return 0;
}