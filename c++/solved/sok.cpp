/*
Link: https://open.kattis.com/problems/sok
*/
#include <iostream>
#include <float.h>
#include <vector>
#include <iomanip>

using namespace std;
int main() {

    double A, B, C, I, J, K;

    cin >> A >> B >> C >> I >> J >> K;

    double ratio_A, ratio_B, ratio_C;

    ratio_A = A / I;
    ratio_B = B / J;
    ratio_C = C / K;

    vector<double>ratios;

    ratios.push_back(ratio_A);
    ratios.push_back(ratio_B);
    ratios.push_back(ratio_C);

    double ratio_min = DBL_MAX;

    for (double ratio : ratios){
        if (ratio < ratio_min){
            ratio_min = ratio;
        }
    }

    cout << fixed << setprecision(6) << abs(I * ratio_min - A) << ' ' << abs(J * ratio_min - B) << ' ' << abs(K * ratio_min - C);

    return 0;
}