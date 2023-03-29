/*
-------------------------------------------------------
Problem: Printing Costs
-------------------------------------------------------
Description
Your workplace is starting to become concerned with the cost of toner used for printing. Of course, some pages are more expensive to print than others. Your job is to write a program that helps to figure out how much toner it will take.

Each character requires a different amount of toner to print. For example, a space requires nothing but a capital Q requires 31. The following table gives the printing cost of each of the 95 printable ASCII characters. The codes for these characters are consecutive, starting with 32 for space and ending with 126 for tilde (~).
-------------------------------------------------------
Input
Input consists of up to 1000 lines of text, ending at end of file. Each line is at most 100 characters long.
-------------------------------------------------------
Output
For each input line, output a line giving the total amount of toner required for printing.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string line;
    int lst[1000], sum, count = 0;

    int ink[] = {0,9,6,24,29,22,24,3,12,12,17,13,7,7,4,10,22,19,22,23,21,27,26,16,23,26,8,11,10,14,10,15,32,24,29,20,26,26,20,25,25,18,18,21,16,28,25,26,23,31,28,25,16,23,19,26,18,14,22,18,10,18,7,8,3,23,25,17,25,23,18,30,21,15,20,21,16,22,18,20,25,25,13,21,17,17,13,19,13,24,19,18,12,18,9};

    while (getline(cin, line)) {
        sum = 0;
        for (int i=0; i < line.size(); i++) {
            sum += ink[int(line[i]) - 32];
        }
        lst[count] = sum;

        count++;
    }

    for (int i=0; i < count; i++) {
        cout << lst[i] << '\n';
    }

    return 0;
}