"""
-------------------------------------------------------
Problem: No Duplicates
-------------------------------------------------------
Description
There is a game in which you try not to repeat a word while your opponent tries to see if you have repeated one.

"THE RAIN IN SPAIN" has no repeats.

"IN THE RAIN AND THE SNOW" repeats THE.

"THE RAIN IN SPAIN IN THE PLAIN" repeats THE and IN.

Write a program to test a phrase.
-------------------------------------------------------
Input
Input is a line containing words separated by single spaces, where a word consists of one or more uppercase letters. A line contains no more than 80 characters.
-------------------------------------------------------
Output
The output is "yes" if no word is repeated, and "no" if one or more words repeat.
-------------------------------------------------------
"""

sentence = input()

words = sentence.split()
dictionary = dict()

for word in words:
    if word not in dictionary:
        dictionary[word] = 1
    else:
        dictionary[word] += 1

duplicate = False

for count in dictionary.values():
    if count > 1:
        duplicate = True
        break

if duplicate:
    print("no")
else:
    print("yes")
