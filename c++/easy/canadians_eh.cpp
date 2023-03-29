/*
-------------------------------------------------------
Problem: 
-------------------------------------------------------
Description
You have received a warning that foreign spies may have infiltrated the great country of Canada. Fortunately, you have developed a foolproof method to determine which potential suspects are truly Canadian: A person is a true Canadian if and only if they end every sentence exactly with eh? .
Given the transcript of a sentence spoken by a suspected spy, write a program to determine if the suspect is truly Canadian…or merely an imposter in disguise!
-------------------------------------------------------
Input
The input consists of a single line, which is the sentence spoken by the suspect. The line will contain between 3 and 100 characters (inclusively). It will also only contain English letters, digits, spaces, and punctuation symbols.
-------------------------------------------------------
Output
Display Canadian! if the speaker is a true Canadian following the above criteria, otherwise display Imposter! .
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string sentence;
    getline(cin, sentence);

    if (sentence.size() >= 3) {
        if (sentence[sentence.size()-1] == '?' && sentence[sentence.size()-2] == 'h' && sentence[sentence.size()-3] == 'e') {
            cout << "Canadian!";
        } else {
            cout << "Imposter!";
        }
    } else {
        cout << "Imposter!";
    }

    return 0;
}