/*
-------------------------------------------------------
Problem: Datum
-------------------------------------------------------
Description
Write a program that, given a date in 2009, determines the day of week on that date.
-------------------------------------------------------
Input
The first line contains two positive integers D (day) and M (month) separated by a space. The numbers will be a valid date in 2009.
-------------------------------------------------------
Output
Output the day of the week on day D of month M in 2009. The output should be one of the words “Monday”, “Tuesday”, “Wednesday”, “Thursday”, “Friday”, “Saturday” or “Sunday”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int D, M, total_days, remainder;
    cin >> D >> M;
    int num_days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    total_days = num_days[M-1] + D;

    remainder = total_days % 7;

    switch(remainder) {
        case 1:
            cout << "Thursday";
            break;
        case 2:
            cout << "Friday";
            break;
        case 3:
            cout << "Saturday";
            break;
        case 4:
            cout << "Sunday";
            break;
        case 5:
            cout << "Monday";
            break;
        case 6:
            cout << "Tuesday";
            break;
        case 0:
            cout << "Wednesday";
            break;
        default:
            break;
    }



    return 0;
}