"""
-------------------------------------------------------
Problem: Patuljci
-------------------------------------------------------
Description
Every day, while the dwarves are busy in the mines, Snow White prepares dinner for them; seven chairs, seven plates, seven forks and seven knives for seven hungry dwarves.

One day nine dwarves came from the mines instead of seven (nobody knows how or why), each of them claiming to be one of Snow White’s seven dwarves.

Luckily, each dwarf wears a hat with a positive integer less than 100 written on it. Snow White, a famous mathematician, realised long ago that the sum of numbers on the hats of her seven dwarves was exactly 100. 

Write a program which determines which dwarves are legit, i.e., pick seven of nine numbers that add to 100.
-------------------------------------------------------
Input
There are 9 lines of input. Each contains an integer between 1 and 99 (inclusive). All of the numbers will be distinct.

The test data will be such that there exists a unique solution.
-------------------------------------------------------
Output
Your program must produce exactly seven lines of output – the numbers on the hats of Snow White’s seven dwarves. Output the numbers in the same order they are given in the input.
-------------------------------------------------------
"""

total = 0
numbers = []

for i in range(9):
    number = int(input())
    numbers.append(number)
    total += number

found = False

for i in range(8):

    for j in range(1,9):

        if total - numbers[i] - numbers[j] == 100:
            numbers.remove(numbers[j])
            numbers.remove(numbers[i])
            found = True

            break

    if found:
        break

for i in numbers:
    print(i)




