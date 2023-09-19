/*
-------------------------------------------------------
Problem: Exam Redistribution
-------------------------------------------------------
Description
Linda is giving an exam. When the exam is over, Linda will redistribute the exams among the students for a peer review, so they may grade each other’s answers and assign preliminary scores.

The students are split up in several rooms of varying sizes. Linda has devised the following scheme for redistributing the exams:

Linda visits the first room, picks up all exams written there, and places them in a pile.

In each subsequent room Linda takes exams from the top of her pile and randomly distributes them to the students in the room. She then picks up all exams written in that room and adds them to the bottom of her pile.

After having visited each room exactly once, Linda returns to the first room, and distributes the remaining exams from her pile there.

Naturally, it is imperative that no student receives their own exam to review, and that Linda does not run out of exams in her pile while doing the redistribution (i.e., that when entering a room after the first one, Linda’s pile contains at least as many exams as there are students in the room). Whether or not this is the case depends on the order in which the rooms are visited. We say that an ordering of the rooms is safe if Linda will not run out of exams in her pile when visiting rooms in that order, and that there is no chance that any student receives their own exam to review.

Can you find a safe order in which to visit the rooms (or determine that no safe order exists)?
-------------------------------------------------------
Input
The input consists of:
- one line containing an integer n (2<= n <= 30), the number of rooms
- one line containing n integers s_1, ..., s_n (1 <= s_i <= 100 for each i), where s_i is the number of students in room i.
-------------------------------------------------------
Output
If it is impossible to redistribute the exams safely, output “impossible”. Otherwise, output a safe order in which to visit the rooms. If there are multiple safe orders, you may give any of them.
-------------------------------------------------------
*/
#include <iostream>
#include <map>

using namespace std;

int main() {


    int num_classes;
    cin >> num_classes;

    int inputs[num_classes];
    int order[num_classes];

    for (int i=0; i<num_classes; i++){
        cin >> inputs[i];
        order[i] = i+1;
    }

    for (int i=0; i<num_classes - 1; i++){
        for (int j=i+1; j<num_classes; j++){
            if (inputs[i] < inputs[j]){
                int temp;
                temp = inputs[j];
                inputs[j] = inputs[i];
                inputs[i] = temp;

                int temp2;
                temp2 = order[j];
                order[j] = order[i];
                order[i] = temp2;
            }
        }
    }

    int first = inputs[0];
    int rest=0;
    for (int i=1; i<num_classes; i++){
        rest+=inputs[i];
    }

    if (first > rest) {
        cout << "impossible";
    } else {
        for (int i=0; i<num_classes; i++){
            cout << order[i] << ' ';
        }
    }

    return 0;
}
