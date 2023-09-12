/*
-------------------------------------------------------
Problem: Spelling Bee
-------------------------------------------------------
Description
The New York Times publishes a daily puzzle called the “Spelling Bee.” In this puzzle, 7 letters are shown in a hexagonal arrangement of 6 letters around a center letter. The task is to come up with as many words as possible that

-contain only letters that are displayed in the hexagon,

-are at least of length 4, and

-contain the center letter.

A letter may be used more than once, and not all letters need to be used.

After playing for a while, you get stuck, but then you remind yourself that the Linux distribution on your computer comes with a machine-readable file of 102305 dictionary words in /usr/share/dict/words!

You decide that even if you can’t excel at the Spelling Bee you can still excel at programming, so you decide to write a program that finds all solutions to a Spelling Bee puzzle from your dictionary.
-------------------------------------------------------
Input
The input consists of a single test case, which starts with a line with 7 distinct lowercase English letters. The first of these letters is the center letter. The next line contains an integer n (1 <= n <= 102305), the size of the dictionary. This line is followed by n lines, each containing a dictionary word of l lowercase English letters (1 <= l <= 24).
-------------------------------------------------------
Output
Output the word list matching the Spelling Bee puzzle in the order in which they appear in the dictionary. You are guaranteed that at least one dictionary entry will match.
-------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {

    string letters;
    cin >> letters;

    int num;
    cin >> num;

    string word;
    vector<string> words;
    vector<string> center_words;

    for (int i=0; i<num; i++){

        cin >> word;
        words.push_back(word);

    }

    bool center_word;

    for (string word : words) {
        center_word = false;

        for (int i=0; i<word.length(); i++){
            if (word[i] == letters[0]){
                center_word = true;
                break;
            }
        }

        if (center_word && word.length() >= 4) {
            center_words.push_back(word);
        }
    }

    bool valid_letters;
    vector<string> valid_words;
    /////////////////
    for (string word: center_words) {

        for (int i=0; i<word.length(); i++){
            
            valid_letters = false;
            
            for (char letter : letters) {

                if (word[i] == letter) {
                    valid_letters = true;
                    break;
                }

            }
            
            if (!valid_letters){
                break;
            }
        }

        if (valid_letters){
            valid_words.push_back(word);
        }
    }
    /////////////////

    for (string word : valid_words) { 
        cout << word << '\n';
    }


    return 0;
}