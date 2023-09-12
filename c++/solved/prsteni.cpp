/*
-------------------------------------------------------
Problem: Prsteni
-------------------------------------------------------
Description
After an exhausting morning, Mirko fell asleep. His brother Stanko, however, just awoke and, like his brother, is all about excitement. Stanko found N rings of varying radii in the garage. He arranged them on the floor so that each ring (except the first and last) touches the ones before and after it.
He started turning the first ring and noticed that the other rings turned as well; some faster, some slower!

Thrilled with his discovery, he decided to count how many times the other rings turn while the first ring turns once. He gave up after noticing that this number is not always an integer and not knowing what to do.

Write a program that determines how many times each ring turns while the first turns once.
-------------------------------------------------------
Input
The first line of input contains an integer N(3<=N<=100), the number of rings.
The next line contains N integers between 1 and 1000, the radii of Stanko's rings, in the order they are laid out on the floor.
-------------------------------------------------------
Output
The output must contain N - 1 lines. For every ring other than the first, in the order they are gfiven in the input, ouput a fraction A/B, meaning that the respective ring turns A/B times while the first ring turns once. The fractions must be in reduced form (the numerator and denominator must not have a common divisor larger than 1). 
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int N, main, main_temp, gear_temp;
    cin >> N;
    cin >> main;

    int gears[N - 1];
    int results[N - 1][2];

    for (int i=0; i < N - 1; i++) {
        cin >> gears[i];
    }

    for (int i=0; i < N - 1; i++) {
        main_temp = main;
        gear_temp = gears[i];
        for (int j=gears[i]; j > 1; j--) {
            if (main_temp % j == 0 && gear_temp % j == 0) {
                main_temp /= j;
                gear_temp /= j;
            }
        }
        results[i][0] = main_temp;
        results[i][1] = gear_temp;
    }

    for (int i=0; i < N-1; i++){
        cout << results[i][0] << '/' << results[i][1] << '\n';
    }



    return 0;
}