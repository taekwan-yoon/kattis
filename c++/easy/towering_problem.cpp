/*
-------------------------------------------------------
Problem: A Towering Problem
-------------------------------------------------------
Description
You’ve been put in charge of an art exhibit from the famous minimalist sculptor J (even his name is minimalist!). J’s work involves the careful layout of vertically dispositioned orthogonal parallelpipeds in a set of tapering obelisks — in other words, he puts smaller boxes on top of larger boxes. His most recent triumph is called “2 by 3’s Decreasing,” in which he has various sets of six boxes arranged in two stacks of three boxes each. One such set is shown below:

J has sent you the art exhibit and it is your job to set up each of the six-box sets at various locations throughout the museum. But when the sculptures arrived at the museum, uncultured barbarians (i.e., delivery men) simply dropped each set of six boxes on the floor, not realizing the aesthetic appeal of their original layout. You need to reconstruct each set of two towers, but you have no idea which box goes on top of the other! All you know is the following: for each set of six, you have the heights of the two towers, and you know that in any tower the largest height box is always on the bottom and the smallest height box is on the top. Armed with this information, you hope to be able to figure out which boxes go together before tomorrow night’s grand opening gala.
-------------------------------------------------------
Input
The input consists of eight positive integers. The first six represent the heights of the six boxes. These values will be given in no particular order and no two will be equal.

The last two values (which will never be the same) are the heights of the two towers.

All box heights will be <= 100 and the sum of the box heights will equal the sum of the tower heights.
-------------------------------------------------------
Output
Output the heights of the three boxes in the first tower (i.e., the tower specified by the first tower height in the input), then the heights of the three boxes in the second tower. Each set of boxes should be output in order of decreasing height. Each test case will have a unique answer.
-------------------------------------------------------
*/
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(int[], int);

int main() {
    int boxes[6];
    int h1, h2;
    vector<int> first, second;

    // take user inputs
    for (int i=0; i < 6; i++){
        cin >> boxes[i];
    }
    cin >> h1 >> h2;

    // sort from greatest to smallest
    bubbleSort(boxes, 6);


    for (int i=0; i < 4; i++) {

        for (int j = i+1; j < 5; j++) {

            for (int k = j + 1; k < 6; k++) {

                if (boxes[i] + boxes[j] + boxes[k] == h1) {
                    first.push_back(boxes[i]);
                    first.push_back(boxes[j]);
                    first.push_back(boxes[k]);
                } else if (boxes[i] + boxes[j] + boxes[k] == h2) {
                    second.push_back(boxes[i]);
                    second.push_back(boxes[j]);
                    second.push_back(boxes[k]);
                }
            }
        }
    }

    for (int i : first) {
        cout << i << ' ';
    }

    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            cout << second[i];
        } else {
            cout << second[i] << ' ';
        }
    }


    return 0;
}

void bubbleSort(int boxes[], int num) {
    int temp;
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (boxes[i] < boxes[j]) {
                temp = boxes[i];
                boxes[i] = boxes[j];
                boxes[j] = temp;
            }
        }
    }
}