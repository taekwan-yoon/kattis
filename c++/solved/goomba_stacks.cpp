/*
-------------------------------------------------------
Problem: Goomba Stacks
-------------------------------------------------------
Description
While exploring a cave, Mario finds that the entrance behind has been closed, leaving him no escape except going forward. Luckily, he has Cappy to help him escape. In front of Mario are a series of N rooms, which he must traverse in order. In the i-th room, Mario will find g_i Goombas, which Mario can control using his trusty hat, Cappy. Each room also has a button, marked with b_i, which indicates the number of Goombas needed to traverse from the i-th room to the i+1-th room. Using Cappy, Mario can stack goombas in order to reach the threshold of Goombas needed for the button. Additionally, he can bring any previous Goombas to subsequent rooms. Mario can escape the cave if he escapes the N-th room. Can you determine if Mario can escape?
-------------------------------------------------------
Input
The first line of input is an integer 1 <= N <= 100 000. The following N lines consist 2 space-separated integers, g_i (1 <= g_i <= 1000) and b_i (1 <= b_i <= 100 000 000), representing the numbers of goombas in the i-th room and the number of goombas needed to escape the i-th room respectively.
-------------------------------------------------------
Output
If Mario can escape, print “possible”. If Mario cannot escape, print “impossible”.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int num, g, b, sum = 0;


    cin >> num;

    bool possibility = true;

    for (int i=0; i<num; i++){
        cin >> g >> b;

        sum += g;

        if(sum < b) {
            possibility = false;
            break;
        } 
    }

    if (!possibility){
        cout << "impossible";
    } else {
        cout << "possible";
    }


    return 0;
}