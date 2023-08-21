/*
-------------------------------------------------------
Problem: Job Expenses
-------------------------------------------------------
Description
At ACME Corp, the seller Robin is selling software like hotcakes. To sell the software, he arranges meetings all over the country. Of course, he always needs to travel there, and sometimes even stay the night. Other times, he decides that a hot dog on the way to a meeting counts as accommodation.

Because Robin is very busy, he hasn’t been able to file his job expenses this month. Eret, the accountant, told him that he could fix it for him, as long as he got the price of all the expenses along with the receipts. Robin did this but misheard him: He has provided a list of all expenses and incomes he has brought in last month, with incomes as positive integers and expenses as negative integers.

Can you help Eret find out how much expenses Robin has paid for the last month?
-------------------------------------------------------
Input
The input consists of two lines: One line with the integer N, and one line with N integers k_i, representing the numbers Robin has written down.
-------------------------------------------------------
Output
Output the sum of all the expenses Robin has paid for the last month.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int n, number, sum = 0;
    cin >> n;

    for (int i=0; i < n; i++){
        cin >> number;
        if (number < 0) {
            sum += (number * -1);
        }
    }

    cout << sum;

    return 0;
}