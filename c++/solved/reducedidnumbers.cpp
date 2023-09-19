/*
-------------------------------------------------------
Problem: Reduced ID Numbers
-------------------------------------------------------
Description
T. Chur teaches various groups of students at university U. Every U-student has a unique Student Identification Number (SIN). A SIN s is an integer in the range 0 <= s <= MaxSIN with MaxSIN = 10^6 - 1. T. Chur finds this range of SINs too large for identification within her groups. For each group, she wants to find the smallest positive integer m, such that within he group all SINs reduced modulo m are unique.
-------------------------------------------------------
Input
The first line of input contains the integer G (1 <= G <= 300): the number of students in the group. The following G lines each contain one SIN. The SINs are distinct, though not necessarily sorted.
-------------------------------------------------------
Output
Output one line containing the smallest modulus m, such that all SINs reduced modulo m are distinct.
-------------------------------------------------------
*/
#include <iostream>
#include <set>

using namespace std;

int main() {

    int num;
    cin >> num;

    int numbers[num];

    set<int>distinct_set;

    for (int i=0; i<num; i++){
        cin >> numbers[i];
    }

    int divisor = 0;
    while(num != distinct_set.size()){
        divisor++;
        distinct_set.clear();
        for (int i=0; i<num; i++){
            distinct_set.insert(numbers[i] % divisor);
        }
    }

    cout << divisor;
    
    return 0;
}

