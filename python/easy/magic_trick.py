"""
-------------------------------------------------------
Problem: Magic Trick
-------------------------------------------------------
Description
You are performing a magic trick with a special deck of cards.

You lay out the cards in a row from left to right, face up. Each card has a lower-case letter on it. Two cards with the same letter are indistinguishable. You select an audience member to perform an operation on the cards. You will not see what operation they perform.

The audience member can do one of two things—they can either select any two cards and swap them, or leave the cards untouched.

In order for the trick to succeed, you must correctly guess what the audience member did—either you guess that the audience member did nothing, or you point at the two cards the audience member swapped.

Given a string that represents the initial arrangement of the cards, can you guarantee that you will always be able to guess the audience member’s operation correctly, no matter what operation they perform?
-------------------------------------------------------
Input
The input consists of a single line containing the string s (1 <= |s| <= 50), which represents the initial arrangement of the cards, in the order they appear in the row. The string contains only lower-case letters (‘a’–‘z’).
-------------------------------------------------------
Output
Output a single line with 1 if you can guarantee that you will always be able to guess the audience member’s operation correctly, or 0 otherwise.
-------------------------------------------------------
"""
string = input()

my_set = set(list(string))

if len(string) != len(my_set):
    print(0)
else:
    print(1)