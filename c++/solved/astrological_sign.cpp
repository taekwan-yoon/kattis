/*
-------------------------------------------------------
Problem: Astrological Sign
-------------------------------------------------------
Description
Harry Potter and his friends are now fourth-year students at Hogwarts School of Witchcraft and Wizardry. This year, one of their subjects is Astrology. To become a successful wizard, Astrology is crucial, as it allows one to predict future events or gain insights into people’s personalities and relationships.

In the first lecture, Harry Potter and his friends need to learn and understand Astrological Signs. One’s Astrological Sign is determined by their birthday, according to the following table:

For example, if one’s birthday is on May 5th, their Astrological Sign is Taurus, as it lies between Apr 21st and May 20th.

Today Harry Potter wants to determine the Astrological Sign of all his classmates. Please help him!
-------------------------------------------------------
Input
The first line of the input contains a single integer t (1 <= t <= 1000) — the number of Harry Potter’s classmates.

In the next t line, each line contains a birthday in the format d m, where d is the date, and m is the first three letters of the name of the month (with the first letter in uppercase, the second and third letters in lowercase). It is guaranteed that all the given dates are valid.
-------------------------------------------------------
Output
Print t lines, each line contains the name of the Astrological Sign.
-------------------------------------------------------
*/
#include <iostream>

using namespace std;

string classify(int, string);

int main() {
    int t;
    cin >> t;
    int day;
    string month;
    string result;
    string results[t];

    for (int i=0; i < t; i++) {
        cin >> day >> month;
        result = classify(day, month);
        results[i] = result;
    }

    for (int i=0; i < t; i++) {
        if (i == t - 1) {
            cout << results[i];
        } else {
            cout << results[i] << '\n';
        }
    }

    return 0;
}


string classify(int day, string month) {
    if (month == "Mar") {
        if (day >= 21) {
            return "Aries";
        } else {
            return "Pisces";
        }
    } else if (month == "Apr") {
        if (day >= 21) {
            return "Taurus";
        } else {
            return "Aries";
        }
    } else if (month == "May") {
        if (day >= 21) {
            return "Gemini";
        } else {
            return "Taurus";
        }
    } else if (month == "Jun") {
        if (day >= 22) {
            return "Cancer";
        } else {
            return "Gemini";
        }
    } else if (month == "Jul") {
        if (day >= 23) {
             return "Leo";
        } else {
            return "Cancer";
        }
    } else if (month == "Aug") {
        if (day >= 23) {
            return "Virgo";
        } else {
            return "Leo";
        }
    } else if (month == "Sep") {
        if (day >= 22) {
            return "Libra";
        } else {
            return "Virgo";
        }
    } else if (month == "Oct") {
        if (day >= 23) {
            return "Scorpio";
        } else {
            return "Libra";
        }
    } else if (month == "Nov") {
        if (day >= 23) {
            return "Sagittarius";
        } else {
            return "Scorpio";
        }
    } else if (month == "Dec") {
        if (day >= 22) { 
            return "Capricorn";
        } else {
            return "Sagittarius";
        }
    } else if (month == "Jan") {
        if (day >= 21) {
            return "Aquarius";
        } else {
            return "Capricorn";
        }
    } else if (month == "Feb") {
        if (day >= 20) {
            return "Pisces";
        } else {
            return "Aquarius";
        }
    }
}