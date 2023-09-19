/*
-------------------------------------------------------
Problem: Exam
-------------------------------------------------------
Description
Your friend and you took the same true/false exam. You know your answers, your friend’s answers, and the number of your friend’s answers that were correct.

Compute the maximum possible score you could have gotten.
-------------------------------------------------------
Input
The first line contains a single integer k, the number of correct answers on your friend’s exam.

The second line contains a string of characters, the answers you wrote down. Each letter is either a ‘T’ or an ‘F’. The length of the string is the number n of exam questions.

The third line also contains a string of n characters, the answers your friend wrote down. Each letter is either a ‘T’ or an ‘F’.
-------------------------------------------------------
Output
The output is one line containing the maximum number of questions you could have gotten correct.
-------------------------------------------------------
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
    int num, same = 0, diff = 0;
    string x1, x2;

    cin >> num >> x1 >> x2;

    int total = x1.length();
    int max_correct = 0;

    for (int i=0; i < total; i++){
        if (x1[i] == x2[i]) { 
            same++;
        } else {
            diff++;
        }
    }

    if (same <= num) {
        max_correct += same;
        num -= same;
        max_correct += (diff - num);
    } else {
        max_correct += num;
        max_correct += diff;
    }

    cout << max_correct;


    return 0;
}