/*
-------------------------------------------------------
Problem: Rating Problems
-------------------------------------------------------
Description
Your judges are preparing a problem set, and they’re trying to evaluate a problem for inclusion in the set. Each judge rates the problem with an integer between -3 and 3, where:

-3 means: I really like this problem!

3 means: I really don’t like this problem!

0 means: Meh. I don’t care if we use this problem or not.

The overall rating of the problem is the average of all of the judges’ ratings—that is, the sum of the ratings divided by the number of judges providing a rating.

Some judges have already rated the problem. Compute the minimum and maximum possible overall rating that the problem can end up with after the other judges submit their ratings.
-------------------------------------------------------
Input
The first line of input contains two integers n (1 <= n <= 10) and k (0 <= k <= n), where n is the total number of judges, and k is the number of judges who have already rated the problem.

Each of the next l lines contains a single integer r (-3 <= r <= 3). These are the ratings of the k judges that have already rated the problem.
-------------------------------------------------------
Output
Output two space-separated floating point numbers on a single line, which are the minimum and maximum overall rating the problem could achieve after the remaining judges rate the problem, minimum first. These values must be accurate to an absolute or relative error of 10^-4.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int n, k;
    int rating;
    int sum = 0;

    cin >> n >> k;

    for (int i=0; i < k; i++) {
        cin >> rating;
        sum += rating;
    }

    cout << (float)(sum + (-3 * (n-k)))/ n << ' ' << (float)(sum + (3 * (n-k)))/ n;

    return 0;
}