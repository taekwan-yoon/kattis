"""
-------------------------------------------------------
Problem: Poker Hand
-------------------------------------------------------
Description
You are given a five-card hand drawn from a standard 52-card deck. The strength of your hand is the maximum value k such that there are k cards in your hand that have the same rank.

Compute the strength of your hand.
-------------------------------------------------------
Input
The input will consist of a single line, with five two-character strings separated by spaces.

The first character in each string will be the rank of the card, and will be one of A23456789TJQK. The second character in the string will be the suit of the card, and will be one of CDHS.

You may assume all the strings are distinct.
-------------------------------------------------------
Output
Output, on a single line, the strength of your hand.
-------------------------------------------------------
"""

cards = input()

card_list = cards.split()

card_dict = dict()

for card in card_list:
    if card[0] in card_dict:
        card_dict[card[0]] += 1
    else:
        card_dict[card[0]] = 1

maximum = 0
for count in card_dict.values():
    if count > maximum:
        maximum = count

print(maximum)



