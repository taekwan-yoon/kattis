/*
Link: https://open.kattis.com/problems/cetiri
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

    vector<int> numbers;
    int number;

    for (int i=0; i<3; i++){
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    bool adjacent = false;
    int diff;
    int final_num;

    if (numbers[1] - numbers[0] == numbers[2] - numbers[1]){
        adjacent = true;
        diff = numbers[1] - numbers[0];
    } else {
        adjacent = false;
    }

    if (adjacent){
        if (numbers[0] - adjacent >= -100){
            final_num = numbers[0] - diff;
        } else {
            final_num = numbers[2] + diff;
        }
    } else {
        if (numbers[1] - numbers[0] > numbers[2] - numbers[1]){
            diff = (numbers[1] - numbers[0]) / 2;
            final_num = numbers[0] + diff;
        } else {
            diff = (numbers[2] - numbers[1]) / 2;
            final_num = numbers[1] + diff;
        }
    }

    cout << final_num;

    return 0;
}