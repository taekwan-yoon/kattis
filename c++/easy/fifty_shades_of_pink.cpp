/*
-------------------------------------------------------
Problem: Fifty Shades of Pink
-------------------------------------------------------
Description
Thore is a fashionable man. Every time he meets up with his programming team, he wears his hot pink team hoodie over a salmon colored shirt with shirt buttons in a dashing rose or pink shade. Of course, he can’t show up to two training sessions with the same buttons on his shirt, that would cause unbearable ridicule. If he can’t find buttons for this perfect color combination, he will come up with some poor excuse for not showing up. He has a box full of different colored buttons in labeled packages. Unfortunately, Thore is color blind, so his helpful daughter has labeled each package with the color of the buttons. Her writing is terrible though, she mixes uppercase and lowercase arbitrarily and has no spacing between words, so Thore needs your help to decipher the names on the labels and select buttons with either “pink” or “rose” somewhere in the name, ignoring case.
-------------------------------------------------------
Input
Input starts with an integer 1<= N <= 1000, the number of button packages in the box. The following N lines each has a color name, one for each package. The names consist of up to 30 characters of letters A - Z, a - z.
-------------------------------------------------------
Output
Print one integer, the number of training sessions Thore can attend. If he can’t attend any session because there are no pink buttons, output his standard excuse “I must watch Star Wars with my daughter”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N, valid_inputs = 0; 
    cin >> N;
    string word;
    for (int i=0; i < N; i++){
        bool valid = false;

        cin >> word;
        for (int i=0; i < word.size(); i++){
            if (int(word[i]) >= 65 && int(word[i]) <= 90) {
                word[i] += 32;
            }
        }

        for (int i=0; i < word.size() - 3; i++) {
            if (word[i] == 'p' && word[i+1] == 'i' && word[i+2] == 'n' && word[i+3] == 'k') {
                valid = true;
                break;
            } else if (word[i] == 'r' && word[i+1] == 'o' && word[i+2] == 's' && word[i+3] == 'e') {
                valid = true;
                break;
            }
        }

        if (valid) {
            valid_inputs++;
        }
    }
    if (valid_inputs) {
        cout << valid_inputs;
    } else {
        cout << "I must watch Star Wars with my daughter";
    }

    return 0;
}