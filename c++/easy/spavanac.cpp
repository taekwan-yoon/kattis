/*
-------------------------------------------------------
Problem: Spavanac
-------------------------------------------------------
Description
Every school morning Mirko is woken up by the sound of his alarm clock. Since he is a bit forgetful, quite often he leaves the alarm on on Saturday morning too. That’s not too bad though, since he feels good when he realizes he doesn’t have to get up from his warm and cozy bed.
He likes that so much that he would like to experience that on other days of the week too! His friend Slavko offered this simple solution: set his alarm clock 45 minutes early, and he can enjoy the comfort of his bed, fully awake, for 45 minutes each day.
Mirko decided to heed his advice, however his alarm clock uses 24-hour notation and he has issues with adjusting the time. Help Mirko and write a program that will take one time stamp, in 24-hour notation, and print out a new time stamp, 45 minutes earlier, also in 24-hour notation.
If you are unfamiliar with 24-hour time notation yourself, you might be interested to know it starts with 0:00 (midnight) and ends with 23:59 (one minute before midnight).
-------------------------------------------------------
Input
The first and only line of input will contain exactly two integers H and M (0≤H≤23,0≤M≤59) separated by a single space, the input time in 24-hour notation. H denotes hours and M minutes.
-------------------------------------------------------
Output
The first and only line of output should contain exactly two integers, the time 45 minutes before input time.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int hour, min;
    int min_diff;

    cin >> hour >> min;
    if (min >= 45) {
        min -= 45;
    } else {
        if (hour > 0) {
            hour--;
            min_diff = 45 - min;
            min = 60 - min_diff;
        } else {
            hour = 23;
            min_diff = 45 - min;
            min = 60 - min_diff;
        }
    }

    cout << hour << ' ' << min;

    return 0;
}