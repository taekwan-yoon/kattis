/*
-------------------------------------------------------
Problem: ABC
-------------------------------------------------------
Description
You will be given three integers A, B, and C. The numbers will not be given in that exact order, but we do know that A is less than B and B less than C. In order to make for a more pleasant viewing, we want to rearrange them in a given order.
-------------------------------------------------------
Input
The first line contains the three positive integers A, B and C, not necessarily in that order. The three numbers will be less than or equal to 100.
-------------------------------------------------------
Output
The second line contains three uppercase letters `A`, `B` and `C` (with no spaces between them) representing the desired order.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y, z, temp;
    cin >> x >> y >> z;

    int lst[] = {x, y, z};
// NEED TO SORT THE LST[]
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (lst[i] > lst[j]) {
                temp = lst[j];
                lst[j] = lst[i];
                lst[i] = temp;
            }
        }
    }

    for (int i=0; i < 3; i++) {
        for (int j=i+1; j < 3; j++) {
            if (lst[i] > lst[j]) {
                temp = lst[j];
                lst[j] = lst[i];
                lst[i] = temp;
            }
        }
    }

    string line;
    cin >> line;
     
    vector<int> order;

    for (int i=0; i < 3; i++) {
        order.push_back(int(line[i])-64);
    }

    for (int i =0; i < order.size(); i++) {
        cout << lst[order[i]-1] << ' ';
    }

    return 0;
}