/*
-------------------------------------------------------
Problem: Synchronizing Lists
-------------------------------------------------------
Description
It is so difficult to keep everything in order! For this problem, you have two lists of numbers, each list having length n. Each number in one list has a corresponding number in the other list. The correspondence is that if both lists were in sorted and placed side by side, each pair of numbers would correspond. For example, in the lists (48, 10, 97) and (7, 46, 20), the corresponding numbers are 10 with 7, 48 with 20, and 97 with 46.
You want to keep the lists synchronized, but you know that the second list has gotten out of order. So you want to put it in the same order as the first list, according to the correspondences.
For example, given the two lists above, the second list should be reordered as (20, 7, 46) to be in order with the first list.
-------------------------------------------------------
Input
Input consists at most 100 test cases. Each test case begins with an integer 1 <= n <= 5 000, followed by 2n lines. The first n lines are the first list (which is in a fixed order), and the second n lines are from the second list (which may be out of sync with the first list). All integers given in the lists are in the range [-10 000, 10 000]. Input ends when n = 0. No list contains duplicates.
-------------------------------------------------------
Output
For each test case, print out the second list so that it has the same ordering as the first list. Print a blank line between lists.
-------------------------------------------------------
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

    int n, number;


    vector<int>results;

    do {

        cin >> n;
        if (n == 0) {
            break;
        }
        int lst1[n], lst2[n], sorted_lst1[n], sorted_lst2[n], rank_lst[n];

        for (int i=0; i < n; i++) {
            cin >> number;
            lst1[i] = number;
            sorted_lst1[i] = number;
        }
        for (int i=0; i < n; i++) {
            cin >> number;
            lst2[i] = number;
            sorted_lst2[i] = number;
        }

        int size = sizeof(lst1) / sizeof(lst1[0]);

        sort(sorted_lst1, sorted_lst1 + size);
        sort(sorted_lst2, sorted_lst2 + size);

        for (int i=0; i < n; i++) {
            for (int j=0; j < n; j++) {
                if (sorted_lst1[j] == lst1[i]) {
                    rank_lst[i] = j;
                }
            }
        }

        for (int i=0; i < n; i++) {
            results.push_back(sorted_lst2[rank_lst[i]]);
        }

        results.push_back(10001);
    } while (true);

    for (auto i : results) {
        if (i == 10001) {
            cout << '\n';
        } else {
            cout << i << '\n';

        }
    }


    return 0;
}