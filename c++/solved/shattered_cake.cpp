/*
-------------------------------------------------------
Problem: Shattered Cake
-------------------------------------------------------
Description
A rectangular cake is transported via a truck to a restaurant. On the way to the destination, the truck hits a pothole, which shatters the cake into N perfectly rectangular pieces of width w and length l, for 1 <= i <= N.

At the destination, the damage is assessed, and the customer decides to order a replacement cake of the same dimensions. Unfortunately, the original order form was incompletely filled and only the width W of the cake is known. The restaurant asks for your help to find out the length L of the cake. Fortunately, all pieces of the shattered cake have been kept.
-------------------------------------------------------
Input
The input consists of the following integers:
    - on the first line, the width W of the cake;
    - on the second line, the number N of shattered pieces;
    - on each of the next N lines, the width w and length l of each piece
-------------------------------------------------------
Output
The output should be the integer L
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    float W, N, w, l;
    float sum =0;
    cin >> W >> N;
    for (int i=0; i<N; i++) {
        cin >> w >> l;
        sum += w * l;
    }

    cout << sum / W;

    return 0;
}