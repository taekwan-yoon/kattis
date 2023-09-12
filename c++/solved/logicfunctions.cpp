/*
-------------------------------------------------------
Problem: Logic Functions
-------------------------------------------------------
Description
In addition to the normal boolean operators we use (such as or, ||, and, && and negation, !) there are also a number of additional operators that might be of interest.
-------------------------------------------------------
Input
In this problem, your task is to write C++ functions that implement a few of them. You will give the output not as a return value, but instead update variables that are passed into your functions as references.

The functions you are to implement are described using truth tables, i.e. an exhaustive list of what the output should be for each input:

The exclusive or

The implication

The equivalence

Template
You can download the template logicfunctions.cpp from the Attachments menu to implement your functions. When submitting your solution, only send in this file.

Testing
First, download the file logicfunctions.h from the Attachments menu and save it in the same place as your solution. That file calls your program with a fixed test case and reports whether it was correct.
-------------------------------------------------------
Output

-------------------------------------------------------
*/
#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    if (x != y) {
        ans = true;
    } else {
        ans = false;
    }
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    if (x == true && y == false){
        ans = false;
    } else {
        ans = true;
    }
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    if (x == y) {
        ans = true;
    } else {
        ans = false;
    }
}