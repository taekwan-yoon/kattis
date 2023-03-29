/*
-------------------------------------------------------
Problem: Alphabet Spam
-------------------------------------------------------
Description
About 90 percent of the 300 billion emails sent every day are spam. Thus, a fast spam detection mechanism is crucial for large email providers. Lots of spammers try to circumvent spam detection by rewriting words like “M0n3y”, “Ca$h”, or “Lo||ery”.
A very simple and fast spam detection mechanism is based on the ratios between whitespace characters, lowercase letters, uppercase letters, and symbols. Symbols are defined as characters that do not fall in one of the first three groups.
-------------------------------------------------------
Input
The input consists of:
    * one line with a string consisting of at least 1 and at most 100000 characters.
A preprocessing step has already transformed all whitespace characters to underscores (_), and the line will consist solely of characters with ASCII codes between 33 and 126 (inclusive).
-------------------------------------------------------
Output
Output four lines, containing the ratios of whitespace characters, lowercase letters, uppercase letters, and symbols (in that order). Your answer should have an absolute or relative error of at most 10^−6.
-------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string input;
    double code, lower=0, upper=0, symbol=0, space=0;

    cin >> input;

    for (int i=0; i < input.size(); i++) {
        code = int(input[i]);
        if (code >= 65 && code <= 90) {
            upper++;
        } else if (code >= 97 && code <= 122) {
            lower++;
        } else if (code == 95) {
            space++;
        } else {
            symbol++;
        }
    }

    cout << setprecision(10);

    cout << space / input.size() << '\n';
    cout << lower / input.size() << '\n';
    cout << upper / input.size() << '\n';
    cout << symbol / input.size();

    return 0;
}
