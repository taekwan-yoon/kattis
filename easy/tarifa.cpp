/*
-------------------------------------------------------
Problem: Tarifa
-------------------------------------------------------
Description
Pero has negotiated a Very Good data plan with his internet provider. The provider will let Pero use up X megabytes to surf the internet per month. Each megabyte that he doesn’t spend in that month gets transferred to the next month and can still be spent. Of course, Pero can only spend the megabytes he actually has.

If we know how much megabytes Pero has spent in each of the first N months of using the plan, determine how many megabytes Pero will have available in the N + 1 month of using the plan.
-------------------------------------------------------
Input
The first line of input contains the integer X (1 <= X <= 100). The second line of input contains the integer N (1 <= N <= 100). Each of the following N lines contains an integer Pi(0 <= Pi <= 10000), the number of megabytes spent in each of the first N months of using the plan. Numbers Pi will be such that Pero will never use more megabytes than he actually has.
-------------------------------------------------------
Output
The first and only line of output must contain the required value from the task.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int X, P;
    cin >> X >> P;
    int month;
    int used =0;
    int next_month;
    for (int i=0; i < P; i++) {
        cin >> month;
        used += month; 
    }

    next_month = X * (P + 1) - used;

    cout << next_month;

    return 0;
}