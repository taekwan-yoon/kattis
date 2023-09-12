/*
-------------------------------------------------------
Problem: Left Beehind
-------------------------------------------------------
Description
Beekeeper Bill is ready to go to the annual beekeeper’s convention with his friends. Bill packed his honey in jars, but unfortunately the honey in some of the jars has turned sour. Bill’s friends are mean, and if too much of Bill’s honey is sour they will go to the convention without him.
If Bill has more jars of sour honey than sweet, he will be left “beehind”. If Bill has more jars of sweet honey than sour he will go to the convention. If Bill has the same number of sweet and sour jars, his friends are undecided. Lastly, Bill’s friends are superstitious, if he has exactly 13 jars they will never speak to him again. Bill needs new friends.
-------------------------------------------------------
Input
Input consists of multiple cases, each on its own line. Each case consists of two integers x and y (0 <= x, y <= 1000), which are the number of sweet and sour jars Bill has, respectively. Input is terminated by a line containing two zeros, which should not be processed. There may be up to 15 test cases in the input.
-------------------------------------------------------
Output
For each case, output one of the following results on its own line (without quotes).

“Left beehind.” (note the spelling, those punsters)

“Undecided.”

“To the convention.”

“Never speak again.”

If Bill’s friends will never speak to him again, that is most important and should be the only output.
-------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<string> answers;

    while (x != 0 || y != 0) {
        if (x + y == 13) {
            answers.push_back("Never speak again.");
        } else if (x < y) {
            answers.push_back("Left beehind.");
        } else if (x > y) {
            answers.push_back("To the convention.");
        } else {
            answers.push_back("Undecided.");
        }

        cin >> x >> y;
    }

    for (const string& phrase : answers) {
        cout << phrase << '\n';
    }

    return 0;
}
