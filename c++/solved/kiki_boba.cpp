/*
Link: https://open.kattis.com/problems/kikiboba
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    string word;

    cin >> word;

    int length = word.length();

    int b_count=0, k_count=0;

    for (int i=0; i<length; i++){
        if (word[i] == 'k'){
            k_count += 1;
        } else if (word[i] == 'b'){
            b_count += 1;
        } else {
            continue;
        }
    }

    if (b_count == 0 && k_count == 0){
        cout << "none";
    } else if (b_count == k_count) {
        cout << "boki";
    } else if (b_count > k_count) {
        cout << "boba";
    } else {
        cout << "kiki";
    }

    return 0;
}