/*
-------------------------------------------------------
Problem: Speeding
-------------------------------------------------------
Description
You’d like to figure out whether a car was speeding while it was driving down a straight road. Unfortunately, you don’t have any radar guns or related instruments for measuring speed directly; all you have are photographs taken of the car at various checkpoints on the road at various times. Given when and where these photographs were taken, what is the fastest speed that you can prove the car must have been going at some point along the road?
-------------------------------------------------------
Input
The first line of input contains an integer n (2≤n≤100), which is the number of photographs taken.
Each of the following n lines contains two space-separated integers t (0≤t≤104) andd (0≤d≤106), where t is the time of the photograph in hours, and d is the distance along the road in miles. The first photograph is always taken at time 0 with distance 0, and both the times and distances strictly increase.
-------------------------------------------------------
Output
Output a single integer, which is the greatest integral speed that you can be certain the car was going at some point in miles per hour.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main() {
    int n, d, t, old_d, old_t, max_speed = 0; 
    cin >> n;

    cin >> old_t;
    cin >> old_d;

    for (int i = 1; i < n; i++) {
        cin >> t >> d;

        if ((d - old_d) / (t - old_t) > max_speed){
            max_speed = (d - old_d) / (t - old_t);
        }
        old_d = d;
        old_t = t;
    }

    cout << max_speed;

    return 0;
}