/*
-------------------------------------------------------
Problem: Help a PhD candidate out!
-------------------------------------------------------
Description
Jon Marius forgot how to add two numbers while doing research for his PhD. And now he has a long list of addition problems that he needs to solve, in addition to his computer science ones! Can you help him?
On his current list Jon Marius has two kinds of problems: addition problems on the form “
” and the ever returning problem “P=NP”. Jon Marius is a quite distracted person, so he might have to solve this last problem several times, since he keeps forgetting the solution. Also, he would like to solve these problems by himself, so you should skip these.
-------------------------------------------------------
Input
The first line of input will be a single integer N (1 <= N <= 1000) denoting the number of testcases. Then follow N lines with either "P=NP" or an addition problem on the form "A+B", where A, B is within [0, 1000] are integers.
-------------------------------------------------------
Output
Output the result of each addition. For lines containing “P=NP”, output “skipped”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N;
    cin >> N;

    string answers[N], input;
    int index;
    int first, second;

    for (int i=0; i<N; i++){
        cin >> input;
        if (input == "P=NP"){
            answers[i] = "skipped";
        } else {
            index = input.find('+');
            first =  stoi(input.substr(0, index));
            second = stoi(input.substr(index + 1, input.size() - index));
            answers[i] = to_string(first + second);
        }
    } 

    for (int i=0; i < N; i++) {
        cout << answers[i] << '\n';
    }


    return 0;
}