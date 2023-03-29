/*
-------------------------------------------------------
Problem: GCVWR
-------------------------------------------------------
Description
You are looking to buy a new camper, but you are a bit concerned that your truck might not be able to safely pull the camper you are currently interested in purchasing. So you do some calculations.
First, you look up your truck’s Gross Combined Vehicle Weight Rating (GCVWR); the maximum total weight it can haul including the weight of the truck itself. You also have a list of items you would want to bring on a camping trip.
But wait! You want a bit of wiggle room too in case you want to bring any extra items with you. So you want to reserve a bit of towing capacity, after factoring in the weight of the vehicle. That is, the total weight of the trailer and goods you want to bring should not exceed 90% of the towing capacity remaining after factoring in the truck.
-------------------------------------------------------
Input
The first line of input contains three integers G (5000≤G≤25000), T (3000≤T≤12000), and N (1≤N≤100). Here, G is the GCVWR in lbs, T is the weight of your truck in lbs, and N is the number of items you want to bring camping. You are guaranteed both G and T are multiples of 10.
The second line contains N space-separated integers w1,…,w_N. For each 1≤i≤N, w_i (1≤w_i≤500) is the weight (in lbs) of the i’th item you want to bring on the trip.
You are further guaranteed T≤G−2000 and that the total weight of all items is at most 90% of the towing capacity that remains after subtracting the weight of the truck from the GCVWR.
-------------------------------------------------------
Output
Output a single line containing a single integer that is the maximum possible weight of a trailer you can pull subject to the restrictions described above.-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main(){
    int G, T, N, item, sum = 0, remaining;

    cin >> G >> T >> N;

    for (int i=0; i < N; i++){
        cin >> item;
        sum += item;
    }

    remaining = (G-T)*0.9 - sum;

    cout << remaining;

    return 0;
}