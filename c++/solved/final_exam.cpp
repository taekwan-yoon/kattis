/*
-------------------------------------------------------
Problem: Final Exam
-------------------------------------------------------
Description
Hanh quickly realized that he made a terrible mistake: Hanh wrote the answer for the 2nd question on the 1st line of the answer sheet, the answer for the 3rd question on the 2nd line, the answer for the 4th question on the 3rd line, and so on. Hanh left the n-th line of the answer sheet empty, and did not write the answer for the 1st question anywhere!

Please help Hanh check what will be his final score. Given that Hanh is a great Math student, his answers for all n questions would be correct if they were on the correct line of the answer sheet.
-------------------------------------------------------
Input
The first line of the input contains a single integer n (1<= n <= 1000) - the number of questions.
n lines follow, the i-th line contains a single character, A, B, C, or D - the correct answer for the i-th question.
-------------------------------------------------------
Output
Print a single integer — Hanh’s final score.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N; 
    cin >> N;

    char input;
    char keys[N+1];
    char answers[N+1];
    int count = 0;

    answers[0] = 'O';
    keys[N] = 'O';

    for (int i=0; i < N; i++) {
        cin >> input;
        answers[i+1] = input;
        keys[i] = input;
    }

    for (int i=0; i < N+1; i++) {
        if (answers[i] == keys[i]) {
            count++;
        }
    }
    cout << count;
    return 0;
}

