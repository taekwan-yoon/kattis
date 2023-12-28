/*
Link: https://open.kattis.com/problems/cosmicpathoptimization
*/
#include <iostream>
#include <math.h>

using namespace std;
int main() {

    int count;
    double sum = 0, temp;

    cin >> count;

    for (int i=0; i<count; i++){
        cin >> temp;
        sum += temp;
    }

    cout << floor(sum / static_cast<double>(count));

    return 0;
}