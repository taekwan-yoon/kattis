/*
-------------------------------------------------------
Problem: Recount
-------------------------------------------------------
Description
The recent schoolboard elections were hotly contested: a proposal to swap school start times for elementary and high school students, a controversial new dress code proposal that bans athletic clothes in school, and a proposal to raise real-estate taxes to pay for a new football practice facility, and the list goes on and on. It is now hours after the polls have closed and a winner has yet to emerge!
In their desperation, the election officials turn to you and ask you to write a program to count the vote!
-------------------------------------------------------
Input
The input consists of a single test case, which is a list of votes cast. Each line in the input contains the name of a candidate for whom a vote was cast. A name may consist of multiple words, separated by spaces. Words contain letters or hyphens, but no other punctuation characters. There will be at least 2 votes on the list. The list of votes ends with a single line containing the characters ***. This line should not be counted. There can be up to 100 000 valid votes.
-------------------------------------------------------
Output
If a candidate obtained a simple or absolute majority of all votes cast (that is, more than any other candidate), output the name of this candidate! If no candidate obtained a simple majority, output: “Runoff!” (don’t forget to include the exclamation mark!)
-------------------------------------------------------
*/
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
    string name;
    unordered_map<string, int> votes;

    do {
        getline(cin, name);
        votes[name]++;
    } while (name != "***");

    int max = 0;
    int majority = 0;

    for (auto vote : votes) {
        if (vote.second > max) {
            max = vote.second;
            name = vote.first;
        }
    }

    for (auto vote : votes) {
        if (vote.second == max) {
            majority++;
        }
    }

    if (majority != 1) {
        cout << "Runoff!";
    } else {
        cout << name;
    }

    return 0;
}