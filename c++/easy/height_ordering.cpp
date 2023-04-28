/*
-------------------------------------------------------
Problem: Height Ordering
-------------------------------------------------------
Description
Mrs. Chambers always has her class line up in height order (shortest at the front of the line). Every September a new class of exactly 20 3rd graders arrive, all of different height. For the first few days it takes a long time to get the kids in height order, since no one knows where they should be in the line. Needless to say, there is quite a bit of jockeying around. This year Mrs. Chambers decided to try a new method to minimize this ordering chaos. One student would be selected to be the first person in line. Then, another student is selected and would find the first person in the line that is taller than him, and stand in front of that person, thereby causing all the students behind him to step back to make room. If there is no student that is taller, then he would stand at the end of the line. This process continues, one student at-a-time, until all the students are in line, at which point the students will be lined up in height order.

For this problem, you will write a program that calculates the total number of steps taken back during the ordering process for a given class of students.
-------------------------------------------------------
Input
The first line of input contains a single integer P, (1<= P <= 1000) which is the number of data sets that follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input. It contains the data set number, K, followed by 20 non-negative unique integers separated by a single space. The 20 integers represent the height (in millimeters) of each student in the class.
-------------------------------------------------------
Output
For each data set there is one line of output. The single output line consists of the data set number, 
, followed by a single space followed by total number of steps taken back.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, order, heights[20], steps = 0;

    cin >> N;

    int answers[N];

    for (int i=0; i < N; i++) {
        steps = 0;
        cin >> order;
        for (int i=0; i < 20; i++) {
            cin >> heights[i];
        }
        for (int j=0; j < 20; j++) {
            for (int k=0; k < j; k++){
                if (heights[j] < heights[k]) {
                    steps++;
                }
            }
        }
        answers[i] = steps;
    }

    for (int i=0; i < N; i++) {
        cout << i + 1 << ' ' << answers[i] << '\n';
    }

    return 0;
}