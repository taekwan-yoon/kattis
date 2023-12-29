/*
Link: https://open.kattis.com/problems/kcuddlanod
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    string N, M, new_N="", new_M="";

    cin >> N >> M;

    for (int i=N.length() - 1; i>=0; i--){
        if (N[i] == '2'){
            new_N += "5";
        } else if (N[i] == '5'){
            new_N += "2";
        } else {
            new_N += N[i];
        }
    }

    for (int i=M.length() - 1; i>=0; i--){
        if (M[i] == '2'){
            new_M += "5";
        } else if (M[i] == '5'){
            new_M += "2";
        } else {
            new_M += M[i];
        }
    }

    if (stoi(new_N) > stoi(new_M)){
        cout << 1;
    } else {
        cout << 2;
    }

    return 0;
}