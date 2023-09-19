/*
-------------------------------------------------------
Problem: Bus Numbers
-------------------------------------------------------
Description
Your favourite public transport company LS (we cannot use their real name here, so we permuted the letters) wants to change signs on all bus stops. Some bus stops have quite a few buses that stop there and listing all the buses takes space. However, if for example buses 141, 142, 143 stop there, we can write 141-143 instead and this saves space. Note that just for two buses this does not save space.
You are given a list of buses that stop at a bus stop. What is the shortest representation of this list?
-------------------------------------------------------
Input
The first line of the input contains one integer N, 1 <= N <= 1000, the number of buses that stop at a bus stop. Then next line contains a list of N space separated integers between 1 and 1000, which denote the bus numbers. All numbers are distinct.
-------------------------------------------------------
Output
Print the shortest representation of the list of bus numbers. Use the format as in the example, separate numbers with single spaces and output them in sorted order.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main() {
    int num; 
    cin >> num;

    int numbers[num];

    for (int i=0; i<num; i++){
        cin >> numbers[i]; 
    }

    sort(numbers, numbers + num);
 
    string answer = "";
    int prev;

    for (int i=0; i<num; i++){
        prev = numbers[i];

        for (int j=i+1; j<num; j++){
            if (numbers[j] - prev == 1) {
                prev = numbers[j];
            } else {
                break;
            }
        }
        if (prev - numbers[i] >= 2){
            answer += to_string(numbers[i]) + '-' + to_string(prev) + ' ';
            i += (prev - numbers[i]);

        } else {
            answer += (to_string(numbers[i]) + ' ');
        }   
    }
 
    cout << answer;


    return 0;
}