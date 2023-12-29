/*
Link: https://open.kattis.com/problems/skocimis
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    int numbers[3];
    for (int i=0; i<3; i++){
        cin >> numbers[i];
    }

    int swap_count = 0;
    int temp;

    while (numbers[1] - numbers[0] > 1 || numbers[2] - numbers[1] > 1) {
        if (numbers[1] - numbers[0] > numbers[2] - numbers[1]){
            temp = numbers[1];
            numbers[1] = temp - 1;
            numbers[2] = temp;
        } else {
            temp = numbers[1];
            numbers[1] = temp + 1;
            numbers[0] = temp;
        }
        swap_count += 1;
    }

    cout << swap_count;

    return 0;
}