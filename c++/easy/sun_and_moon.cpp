/*
-------------------------------------------------------
Problem: Sun and Moon
-------------------------------------------------------
Description
You recently missed an eclipse and are waiting for the next one! To see any eclipse from your home, the sun and the moon must be in alignment at specific positions. You know how many years ago the sun was in the right position, and how many years it takes for it to get back to that position. You know the same for the moon. When will you see the next eclipse?
-------------------------------------------------------
Input
The input consists of two lines.

The first line contains two integers, ds and ys (0 <= ds < ys <= 50), where ds is how many years ago the sun was in the right position, and ys is how many years it takes for the sun to be back in that position. 

The second line contains two integers, dm and ym (0 <= dm < ym <= 50), where dm is how many years ago the moon was in the right position, and ym is how many years it takes for the moon to be back in that position.
-------------------------------------------------------
Output
Output a single integer, the number of years until the next eclipse. The data will be set in such a way that there is not an eclipse happening right now and there will be an eclipse within the next 5000 years.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;
int main() {
    int years = 0;
    int ds, ys, dm, ym;
    cin >> ds >> ys >> dm >> ym;
    while (ds % ys != 0 || dm % ym != 0) {
        ds++;
        dm++;
        years++;
    }

    cout << years;

    return 0;
}