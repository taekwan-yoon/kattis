/*
-------------------------------------------------------
Problem: ICPC Awards
-------------------------------------------------------
Description
https://open.kattis.com/problems/icpcawards
-------------------------------------------------------
Input
The input starts with the number of teams N (12 <= N <= 200).

The i-th line of the next N lines contains information about the team that ranks i: the university name and the team name separated by a single space. Both names consists of digits, lowercase and uppercase English alphabet letters only. Both names does not exceed 20 letters in length.

It is guaranteed that there are at least 12 different universities.
-------------------------------------------------------
Output
The output should contain 12 lines describing 12 winners. In each line, you should print the university name and the team name separated by a single space. The winners should be listed in the same order as the input.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    
    int n; 
    string university, team;
    string ranking[12][2];
    bool first;
    int count =0;
    cin >> n;

    for (int i=0; i < 12; i++) {
        ranking[i][0] = " ";
        ranking[i][1] = " ";
    }

    for (int i=0; i < n; i++) {
        cin >> university >> team;

        first = true;
        
        for (int j=0; j < 12; j++) {
            if (university == ranking[j][0]){
                first = false;
                break;
            }
        }

        if (first && count < 12) { 
            ranking[count][0] = university;
            ranking[count][1] = team;
            count++;
        }
    }

    for (int i=0; i < 12; i++) {
        cout << ranking[i][0] << ' ' << ranking[i][1] << '\n';
    }



    return 0;
}