"""
-------------------------------------------------------
Problem: Ekki dauði opna inni
-------------------------------------------------------
Description
A lot of people write from left to right, but Ketill loves to write vertically. A consequence of this is that people tend to misread his writings. Ketill has decided to remedy this problem by writing a program that converts his writing to a more human readable format.
-------------------------------------------------------
Input
The input consists of two lines. Each contains at most 2100 characters and the character “|” denotes where Ketill starts writing on a new line.
-------------------------------------------------------
Output
One line containing the writing of Ketill written from left to right.
-------------------------------------------------------
"""

first = input()
second = input()

first_list = first.split('|')
second_list = second.split('|')

final = first_list[0] + second_list[0] + ' ' + first_list[1] + second_list[1]

print(final)


