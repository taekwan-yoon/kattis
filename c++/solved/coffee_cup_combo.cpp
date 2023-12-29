/*
Link: https://open.kattis.com/problems/coffeecupcombo
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <float.h>

using namespace std;
int main() {

    int n;
    string s, new_s="";

    cin >> n >> s;

    for (int i=0; i<n; i++){

        if (i == 0){
            new_s += s[i];
        } else if (i == 1){
            if (s[i] == '1' || s[i-1] == '1'){
                new_s += '1';
            } else {
                new_s += '0';
            }
        } else {
            if (s[i] == '1' || s[i-1] == '1' || s[i-2] == '1'){
                new_s += '1';
            } else {
                new_s += '0';
            }
        }
    }

    int count = 0;
    for (int i=0; i < new_s.length(); i++){
        if (new_s[i] == '1'){
            count += 1;
        }
    }

    cout << count;

    return 0;
}