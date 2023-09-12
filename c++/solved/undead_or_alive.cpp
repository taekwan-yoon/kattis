/*
-------------------------------------------------------
Problem: Undead or Alive
-------------------------------------------------------
Description
Now that zombies have learned to use SMS messaging, it is imperative to develop software for detecting zombies over text. After many long months of study, the top scientists have figured out how to do it. The key observation is that humans only use smiley faces, represented by the exact substring :), and zombies only use frowny faces, represented by the exact substring :(. However, upon realizing this, double agents were trained to use both kinds of emoticons at once! Your job is to write a program to determine who a given message is from.
-------------------------------------------------------
Input
The input will consist of a single line of text, no longer than 160 characters, containing letters, numbers, spaces, and any of the following symbols: .,'!?:)(.
-------------------------------------------------------
Output
If the line contains only smiley faces and no frowny faces, then output alive.

If the line contains only frowny faces and no smiley faces, then output undead.

If the line contains both smiley faces and frowny faces, then output double agent.

Otherwise, output machine.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

void solution(string);

int main() {

    string sentence;
    getline(cin, sentence);

    solution(sentence);

    return 0;
}

void solution(string sentence){
    int smile=0, frown=0;
    for (int i=0; i < sentence.size()-1; i++) {
        if (sentence[i] == ':') {
            if (sentence[i+1] == ')') {
                smile++;
            } else if (sentence[i+1] == '(') {
                frown++;
            }
        } 
    }


    if (smile > 0 && frown > 0) {
        cout << "double agent";
    } else if (smile > 0) {
        cout << "alive";
    } else if (frown >0) {
        cout << "undead";
    } else {
        cout << "machine";
    }


}

