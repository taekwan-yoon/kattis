/*
-------------------------------------------------------
Problem: Missing Numbers
-------------------------------------------------------
Description
You enjoy your new job as a teacher of young children. It’s fun to see them learning to count, recognize letters, draw, and interact with the world.

One common problem you’ve noticed is that children often forget numbers when counting. For example, early on they might count “one, two, three, five, six.” You have to remind them about that “four” that they didn’t say. And as they get more proficient and clever, they may use the “quick” way of counting: “one, two, skip a few, ninety-nine, one hundred!”

Please write a program that can help you (and your students) identify the missing numbers when they are counting.
-------------------------------------------------------
Input
The first line of input contains a single integer n, where 1 <= n <= 100. Each of the next n lines contains one number that the child recited. Each recited number is an integer between 1 and 200 (inclusive). They are listed in increasing order, and there are no duplicates.
-------------------------------------------------------
Output
If the child recited all the numbers between 1 and the last number they recited, then print good job.

If the child missed any numbers between 1 and the last number they recited, then print those missing numbers in increasing numeric order, one per line.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {

    int number;
    cin >> number;

    int list[number];

    for (int i=0; i<number; i++){
        cin >> list[i];
    }

    vector<int> missing_list;
    bool missing;

    for (int i=1; i<=list[number - 1]; i++){
        
        missing = true;
        for (int j : list){
            if (i == j) {
                missing = false;
                break;
            }
        }

        if (missing) {
            missing_list.push_back(i);
        }

    }

    if (missing_list.empty()) {
        cout << "good job";
    } else {
        for (int i : missing_list) {
            cout << i << '\n';
        }
    }

    

    

    return 0;
}