/*
-------------------------------------------------------
Problem: Stopwatch
-------------------------------------------------------
Description
Robin just received a stopwatch from her grandfather. Robin’s stopwatch has a single button. Pressing the button alternates between stopping and starting the stopwatch’s timer. When the timer is on, the displayed time increases by 1 every second.

Initially the stopwatch is stopped and the timer reads 0 seconds. Given a sequence of times that the stopwatch button is pressed, determine what the stopwatch’s timer displays.
-------------------------------------------------------
Input
The first line of input contains a single integer N (1 <= N <= 1000), which is the number of times the stopwatch was pressed.

The next N lines describe the times the stopwatch’s button was pressed in increasing order. Each line contains a single integer t (0 <= t <= 10^6), which is the time the button was pressed. No two button presses happen on the same second.
-------------------------------------------------------
Output
Display still running if the stopwatch’s timer is still running after all button presses were made. Otherwise display the number of seconds displayed on the stopwatch’s timer.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, sum = 0;
    cin >> N;

    if (N % 2 != 0) {
        cout << "still running";
    } else {
        int times[N];
        for (int i=0; i < N; i++) {
            cin >> times[i];
        }
        for (int j=0; j < N; j += 2){
            sum += (times[j+1] - times[j]);
        }
        cout << sum;
    }

    return 0;
}