/*
-------------------------------------------------------
Problem: Harshad Numbers
-------------------------------------------------------
Description
We’re all familiar with harshad numbers. For this problem, you will ... what’s that? You aren’t familiar with harshad numbers? They’re also known as Niven numbers – does that ring a bell?? Anything???

Well, it’s a simple enough concept. A harshad number is a number which is evenly divisible by the sum of its digits. For example, 24 is a harshad number: the sum of its digits is 2 + 4 = 6 and 24 is divisible by 6. 156 is also a harshad number, since 1 + 5 + 6 = 12 and 156 = (12)(13). 157 is NOT a harshad number since it is not divisible by 1 + 5 + 7 = 13. 

We’re all familiar with harshad numbers. For this problem, you will be given a number n and must find the smallest harshad number >= n.
-------------------------------------------------------
Input
Input consists of a single line containing a positive integer n <= 1 000 000 000.
-------------------------------------------------------
Output
Display the smallest harshad number greater than or equal to n.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

bool harshad(string);

int main() {

    string num;
    cin >> num;
    bool valid;
    int current_number;

    while (true) {
        valid = harshad(num);
        if (valid) {
            cout << num;
            break;
        } else {
            int current_number = stoi(num);
            current_number++;
            num = to_string(current_number);
        }
    }

    return 0;
}

bool harshad(string num) {
    int sum = 0;
    for (int i=0; i < num.size(); i++) {
        sum += static_cast<int>(num[i]) - '0';
    }
    int int_num = stoi(num);

    if (int_num % sum == 0) {
        return true;
    } else {
        return false;
    }
}