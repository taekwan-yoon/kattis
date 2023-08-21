/*
-------------------------------------------------------
Problem: International Dates
-------------------------------------------------------
Description
You read a lot of documents that come from the United States, Europe, and other countries around the world. The issue is that their date formats aren’t consistent! The US formats their dates as MM/DD/YYYY while in Europe they format it as DD/MM/YYYY. That is, in the US the month comes before the day, while in Europe the day comes first. Given a date, can you determine if its definitely the US format, for sure European, or could be either? (Note that there are even more date formats, but luckily since the year is guaranteed to be last in this case, we only have to worry about these 2 formats.)
-------------------------------------------------------
Input
The input consists of a single string comprised of 3 integers separated by forward slashes, as AA/BB/CCCC, where 1 <= AA, BB , <= 31, and 0 <= CCCC <= 9999. It is guaranteed that the given string will be a valid date for at least one of the formats. You can assume that all 12 months have exactly 31 days, so there is no need to worry about months with 30 days, or February.
-------------------------------------------------------
Output
Output either US if the date doesn’t conform to the European format, or EU if the date doesn’t conform to the US format. Otherwise, output either if there is no way to know for sure which format the date follows.
-------------------------------------------------------
*/
#include <iostream>
#include <cassert>

using namespace std;
int main() {

    string date;

    cin >> date;

    assert(date[2] == '/' && date[5] == '/');

    int first, second;

    first = stoi(date.substr(0, 2));
    second = stoi(date.substr(3, 2));

    if (first > 12) { 
        cout << "EU";
    } else if (second > 12) {
        cout << "US";
    } else {
        cout << "either";
    }

    return 0;
}