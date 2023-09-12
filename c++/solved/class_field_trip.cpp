/*
-------------------------------------------------------
Problem: Class Field Trip
-------------------------------------------------------
Description
Instructors ann and ben firmly believe that everything should be alphabetical, especially names. (They also don’t believe in capital letters!) They take alphabetical order to such an extreme that they even order the letters of their names when listed together. For example, the last time they co-taught they listed the instructors as abennn! They are taking their classes on a class field trip, so they need to merge their lists of students. Fortunately, they each have their student lists in order, so merging the lists should be quick. If ann has john and amy in her class and ben has jack and jill in his class, their two lists would be ahjmnoy and acijjkll. The field trip list would be aachijjjkllmnoy.

Given ann’s and ben’s lists, produce the field trip list.
-------------------------------------------------------
Input
Input consists of exactly two lines. Each line contains a string of from 1 to 100 lower case letters. These are ann's and ben's lists.
-------------------------------------------------------
Output
Output a single string of lower case letters, which represents the merging of ann’s and ben’s lists.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    string name1, name2;
    cin >> name1 >> name2;

    int size1 = name1.size();
    int size2 = name2.size();

    char full_name[size1 + size2];

    int position1=0, position2=0, full_position=0;

    for (int i=0; i < size1 + size2; i++){
        if (position1 == size1){
            full_name[full_position] = name2[position2];
            full_position++;
            position2++;
        } else if (position2 == size2) {
            full_name[full_position] = name1[position1];
            full_position++;
            position1++;
        } else {
            if (name1[position1] < name2[position2]){
                full_name[full_position] = name1[position1];
                full_position++;
                position1++;
            } else {
                full_name[full_position] = name2[position2];
                full_position++;
                position2++;
            }
        }
    }

    for (int i=0; i < size1+size2; i++){
        cout << full_name[i];
    }

    return 0;
}