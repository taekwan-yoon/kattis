/*
-------------------------------------------------------
Problem: Hangman
-------------------------------------------------------
Input
The input consists of two lines representing a single game of Hangman. The first line contains the word to be guessed, a non-empty string of uppercase English alphabet letters (A–Z) of maximum length 16. The second line contains a permutation of the 26 letters of the English alphabet, also uppercase.
-------------------------------------------------------
Output
If Ned wins the game by guessing letters in the order given by the permutation (proceeding from left to right), output “WIN”. Otherwise, output “LOSE”.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;
int main() {

    string word;
    string guess;
    set<char> word_letters;
    set<char> guess_letters;
    int life_count;
    bool valid;
    cin >> word >> guess;

    for (int i=0; i < word.size(); i++) {
        word_letters.insert(word[i]);
    }
    
    life_count = 10;

    for (int i=0; i < guess.size(); i++) {
        if (word_letters.size() == guess_letters.size() || life_count == 0) {
            break;
        }

        valid = false;
        for (char letter: word_letters) {
            if (letter == guess[i]) {
                guess_letters.insert(guess[i]);
                valid = true;
                break;
            } 
        }

        if (!valid) {
            life_count--;
        }
    }

    if (life_count == 0) {
        cout << "LOSE";
    } else {
        cout << "WIN";
    }


    return 0;
}