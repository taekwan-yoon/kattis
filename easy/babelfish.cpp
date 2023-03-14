/*
-------------------------------------------------------
Problem: A Towering Problem
-------------------------------------------------------
Description
You have just moved from Waterloo to a big city. The people here speak an incomprehensible dialect of a foreign language. Fortunately, you have a dictionary to help you understand them.
-------------------------------------------------------
Input
Input consists of up to 100000 dictionary entries, followed by a blank line, followed by a message of up to 100000 words. Each dictionary entry is a line containing an English word, followed by a space and a foreign language word. No foreign word appears more than once in the dictionary. The message is a sequence of words in the foreign language, one word on each line. Each word in the input is a non-empty sequence of at most 10 lowercase letters.
-------------------------------------------------------
Output
Output is the message translated to English, one word per line. Foreign words not in the dictionary should be translated as “eh”.
-------------------------------------------------------
*/
#include <iostream>
#define MAX 100000
#include <unordered_map>

using namespace std;
int main() {
    string results[MAX];
    unordered_map<string, string> dictionary;
    string line;
    int sep;
    string foreign, local;

    while (getline(cin, line)) {
        if (line.empty()) {
            break;
        }
        sep = line.find(' ');
        local = line.substr(0,sep);
        foreign = line.substr(sep+1, line.size() - sep - 1);
        dictionary[foreign] = local;
    };

    int count = 0;
    while(getline(cin, line)) {
        if (dictionary[line].empty()) {
            results[count] = "eh";
        } else {
            results[count] = dictionary[line];
        }
        count++;
    }

    for (int i=0; i < count; i++) {
        if (i == count - 1) {
            cout << results[i];
        } else {
            cout << results[i] << '\n';
        }

    }

    return 0;
}