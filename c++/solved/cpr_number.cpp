/*
-------------------------------------------------------
Problem: CPR Number
-------------------------------------------------------
Description
Danish citizens have a unique personal identification number in the Danish Central Person Register, called the CPR number.

Each CPR number consists of ten digits. The first six digits represent the person’s day of birth. The following four digits are a sequence number.

Until 2007, all Danish CPR numbers had to follow the modulo 11 rule: The CPR number c1 *4, c2 *3, c3 * 2, c4 * 7, c5 * 6, c6 * 5, c7 * 4, c8 * 3, c9 * 2, c10 * 1 must satisfy that is divisible by 11 without remainder.

A publication from the government agency CPR-Kontoret from 1 July 2008 explains the method using the CPR number 070761-4285 as an example.
-------------------------------------------------------
Input
A CPR number in the format ddmmyy-kkkk, i.e, 10 digits separated by a single hyphen. It is guaranteed that ddmmyy is a valid date.
-------------------------------------------------------
Output
“1” if the CPR Number is valid accoring to the modulo 11 test, else “0”.
-------------------------------------------------------
*/
#include <iostream>
#include <string>

using namespace std;


int solve(string input) {

    int sum = 0;

    for (int i=0; i < 11; i++) {
        if (i == 0){
            sum += (int(input[i]) - 48) * 4;
        }
        else if (i == 1){
            sum += (int(input[i]) - 48) * 3;
        }
        else if (i == 2) {
            sum += (int(input[i]) - 48) * 2;
        } 
        else if (i == 3){
            sum += (int(input[i]) - 48) * 7;
        }
        else if (i == 4){
            sum += (int(input[i]) - 48) * 6;
        }
        else if (i == 5){
            sum += (int(input[i]) - 48) * 5;
        }
        else if (i == 7) {
            sum += (int(input[i]) - 48) * 4;
        }
        else if (i == 8) {
            sum += (int(input[i]) - 48) * 3;
        }
        else if (i == 9) {
            sum += (int(input[i]) - 48) * 2;
        }
        else if (i == 10) {
            sum += (int(input[i]) - 48) * 1;
        }
    }

    if (sum % 11 == 0){
        return 1;
    } else {
        return 0;
    }

}

int main() {

    string input;

    cin >> input;

    int result = solve(input);

    cout << result;


    return 0;
}