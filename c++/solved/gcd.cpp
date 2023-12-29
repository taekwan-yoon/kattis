/*
Link: https://open.kattis.com/problems/gcd
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

    int A, B, maximum, common_div;

    cin >> A >> B;

    maximum = min(A, B);

    for (int i=maximum; i>0; i--){
        if (A % i == 0 && B % i == 0){
            common_div = i;
            break;
        }
    }

    cout << common_div;

    return 0;
}