/*
-------------------------------------------------------
Problem: Forced Choice
-------------------------------------------------------
Description
Puff the Magic Dinosaur is a renowned magician. Due to the pandemic, he can only perform for his princess using the latest video conferencing tools. As a result, many of his usual in-person routines cannot be performed, and he must come up with a new trick.

Puff has decided to perform the following mentalist trick for the princess. First, Puff lays out N cards on the table. Each of these cards have a unique label 1,...,N. Before the start of the show, Puff wrote down a prediction which is the label of one of the cards, put it into a sealed envelope, and mailed it to the princess.

During the show, Puff asks the princess to choose some of the remaining cards. Puff is careful to remind the princess to choose at least one but not all of the remaining cards. After the princess tells Puff which cards she chose, Puff would then say either “you chose to keep those cards” or “you chose to remove those cards”. In the first case, the chosen cards are kept and all other cards are removed from the table. In the second case, the chosen cards are removed and the remaining cards are kept. This is repeated until there is only one card left. At this point Puff asks the princess to open the envelope, and magically the prediction matches the remaining card on the table.

Help Puff determine the appropriate response at each step.
-------------------------------------------------------
Input
The first line of input contains three integers N (2≤N≤200), which is the number of cards, P (1≤P≤N), which is the secret prediction, and S (1≤S≤N−1), which is the number of steps.
The next S lines describe the choices of the princess at each step. Each of these lines starts with the integer m (1≤,≤N−1), which is the number of cards chosen, followed by m distinct integers indicating the labels of the cards chosen. It is guaranteed that if Puff has carried out the previous steps correctly, the princess will only choose cards still on the table. Furthermore, the princess will always choose at least one but not all of the remaining cards.
It is guaranteed that there will be one card left after S steps if Puff has carried out all S steps correctly.
-------------------------------------------------------
Output
For each step, display on a line either KEEP or REMOVE if Puff should keep the chosen cards or remove the chosen cards, respectively.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int N, P, S, m, x;
    bool keep;
    cin >> N >> P >> S;
    string keep_remove[S];

    for (int i=0; i < S; i++) {
        cin >> m;
        keep = false;
        for (int j=0; j < m; j++) {
            cin >> x;
            if (x == P) {
                keep = true;
            }
        }
        if (keep) {
            keep_remove[i] = "KEEP";
        } else {
            keep_remove[i] = "REMOVE";
        }
    }

    for (string valid : keep_remove) {
        cout << valid << '\n';
    }


    return 0;
}