/*
-------------------------------------------------------
Problem: Mirror Images
-------------------------------------------------------
Description
Atrebla is developing a new smartphone camera app that she believe will be the next big hit on the app store. Camera apps usually display the image mirrored left-to-right on the screen, so that what you see on the screen matches the movement of your face. To help her camera app stand out from the rest, Atrebla will be adding a unique effect that mirrors an image both left-to-right and top-to-bottom. Help her implement this feature.
-------------------------------------------------------
Input
The first line contains a single integer T <= 100 giving the number of test cases. Each test case starts with a line containing an integer R (1 <= R <= 20), the number of rows in the image, and an integer C (1 <= C <= 20), the number of columns. The next R lines contain C characters, all of which are either . or *.
-------------------------------------------------------
Output
For each test case, output a line containing "Test x" where x is the test case number starting from 1. After that, output the mirrored image.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N, row, column;
    cin >> N;
    for (int i=0; i<N; i++){
        cout << "Test " << i + 1 << '\n';
        cin >> row >> column;

        string image[row];

        for (int j=0; j < row; j++){
            cin >> image[j];
        }

        for (int j=row-1; j >= 0; j--){
            for (int k=column-1; k >= 0; k--){
                cout << image[j][k];
            }
            cout << '\n';
        }

    }

    return 0;
}