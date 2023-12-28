/*
-------------------------------------------------------
Problem: 
-------------------------------------------------------
Description

-------------------------------------------------------
Input

-------------------------------------------------------
Output

-------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
int main() {

    string str, pattern;
    int count;

    str = "";

    cin >> pattern;
    cin >> count;

    for (int i=0; i < count; i++){
        str += pattern;
    }

    cout << str;

    return 0;
}