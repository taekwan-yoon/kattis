/*
-------------------------------------------------------
Problem: The Last Problem
-------------------------------------------------------
Description
In the distant future, an older Twilight Sparkle is visited by her faithful student, Luster Dawn. Luster has always been diligent with her studies in magic, but wonders why Twilight places so much focus on friendship in the curriculum; she sees it as a distraction and a waste of time. After all, friendships take work, are complicated, and to top it all off, there’s no guarantee they’ll last. Why bother with them?

Of course, Twilight was in that position herself once, and she knows firsthoof the importance of friendship. To help Luster understand, Twilight recollects her adventures with her friends...

In these few weeks you’ve come to have an adventure of your own. You’ve experienced the glory of victory and you’ve met face-to-face with defeat. You’ve learned to work alone and you’ve learned to work together. You’ve found that sometimes the obvious approach is the correct one—and that sometimes you’ll need to put in a bit more effort to find a solution. You’ve solved countless problems and the fact that you’re still here, after weeks of the most trying challenges, is a powerful testament to your exemplary ability and resilience. But there’s one last problem for you to solve: saying goodbye.

By the end of these five hours, you will be walking your separate ways, having taken all that we have had to offer. Goodbyes are always bittersweet, especially when they’re said to close friends and mentors. Perhaps we can make this one sting a little less?
-------------------------------------------------------
Input
The first and only line of input contains a single string S (1 <= S <= 50), the name of the one you will bid farewell to.

It is guaranteed that S contains only lowercase and uppercase Latin alphabet characters and spaces, does not contain two consecutive spaces and its first and last characters are not spaces.
-------------------------------------------------------
Output
Output a single line containing the string Thank you, S, and farewell!, where S is the name of the one you will bid farewell to.
-------------------------------------------------------
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
    string name;

    getline(cin, name);

    cout << "Thank you, " + name + ", and farewell!";


    return 0;
}