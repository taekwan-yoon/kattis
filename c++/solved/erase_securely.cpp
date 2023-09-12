/*
-------------------------------------------------------
Problem: Erase Securely
-------------------------------------------------------
Description
Jon Marius is the computer expert at his company and has now been tasked to find some software for erasing data properly. It is very important that the data should not be recoverable afterwards, so it should be overwritten on the hard drive several times. Unable to find any free program up to the task, Jon Marius decides to write such a program himself. The user interface is simple, it only asks for the file to be destroyed and n, the number of times it should be overwritten. This number can range from 1 (quick deletion) to 20 (maximum security). Jon Marius processes the file bit by bit and does not consider writing a zero where there was already a zero as really overwriting. So for each of the n sweeps, he overwrites each zero with a one, and each one with a zero, respectively.

Jon Marius knows that independent testing is important, so he has asked you to write the verification routine. He will not listen to your objections to the algorithm so eventually you give in.
-------------------------------------------------------
Input
The first line of the input contains a single integer 1 <= N <= 20. The two following lines each contain a string containing only the characters 0 and 1. The first of these lines represent the bits of the file before deletion and the second the bits on the same position on the hard drive after the file has been deleted. The length of these strings are the same and between 1 and 1000 characters.
-------------------------------------------------------
Output
Output a single line containing either the words “Deletion succeeded” if each bit is switched n times or “Deletion failed” if this is not the case.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {

    int num;
    string input, output;
    bool validity = true;

    cin >> num >> input >> output;


    if(num % 2 == 0) {

        for(int i=0; i<input.length(); i++) {
            if(input[i] != output[i]){
                validity = false;
                break;
            }
        }
    } else if(num % 2 == 1) {
        for (int i=0; i<input.length(); i++){
            if (input[i] == output[i]) {
                validity = false;
                break;
            }
        }
    }

    if (validity) {
        cout << "Deletion succeeded";
    } else {
        cout << "Deletion failed";
    }


    return 0;
}