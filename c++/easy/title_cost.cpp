/*
-------------------------------------------------------
Problem: Title Cost
-------------------------------------------------------
Description
You are head of operations at FlixNet, and you are responsible for transmitting just the title of movies to consumers. All movie titles on FlixNet are a single word and consist only of alphabetic characters.

The aggregate cost for transmitting a particular title is just equal to the number of letters in that title, except that your interweb service preventer has agreed to cap that cost at a given (floating point) value.

Given the title of a movie and the value of that cap, calculate your cost to transmit that movie title to your consumers.
-------------------------------------------------------
Input
The input is a single line containing the name of the movie s and the cap on the cost c. The name of the movie will contain between 1 and 30 characters, inclusive, and consist solely of uppercase or lowercase letters. The cost will be a floating point value with 0 <= c <= 100.
-------------------------------------------------------
Output
Output a single floating point value, which is the minimum of the length of the title and the cap on the cost. Your solution will be judged correct if it is within 1e-8 absolute or relative error of the correct answer.
-------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string s;
    double c;
    cout << fixed;
    cout << setprecision(8);
    cin >> s >> c;

    double s_cost = s.size();

    if (c > s_cost) {
        cout << s_cost;
    } else {
        cout << c;
    }


    return 0;
}