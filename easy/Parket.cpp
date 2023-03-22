/*
-------------------------------------------------------
Problem: Parket
-------------------------------------------------------
Description
Ivica has set up a new parquet flooring in his room. The room is L decimeters long and W decimeters wide.

The blocks are of quadratic shape and each has an area of one quadratic decimeter. Once Ivica had set up the flooring, which consists of brown-colored blocks, he decided to paint the blocks on the edge of the room red.

The picture below illustrates the scenario from the Sample Input 2 - outer blocks are red, while the remaining two inner blocks are brown:

Marica has come to visit Ivica. While Ivica was serving her cookies, she counted the number of blocks of each color. When she returned home, she recalled of the two numbers and wished to calculate the dimensions of Ivica’s room. Help her!
-------------------------------------------------------
Input
The first and only line of input contains two integers separated by a space, R (the number of red blocks) and B (the number of brown blocks). The following constraints will apply: 8 <= R <= 5000, 1 <= B <= 2000000.
-------------------------------------------------------
Output
The first and only line of output must contain the dimensions of the room, L and W, respectively. If the numbers differ, output the greater one first. The test data will be such that the solution is unique.
-------------------------------------------------------
*/
#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main() {
    int R, B;
    cin >> R >> B;
    
    set<int> factors;
    vector<int> itr;

    R -= 4;
    R /= 2;

    for (int i=1; i < R; i++) {
        if ((R - i) * i == B) {
            factors.insert(R-i);
            factors.insert(i);
        }
    }

    if (factors.size() == 1) {
        for (auto i : factors) {
            cout << i + 2<< ' ';
        }
        for (auto i : factors) {
            cout << i + 2;
        }
    } else {
        for (auto i : factors){
            itr.push_back(i);
        }
        cout << itr[1] + 2 << ' ' << itr[0] + 2;
    }


    return 0;
}   