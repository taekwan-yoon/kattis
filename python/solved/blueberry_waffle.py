"""
-------------------------------------------------------
Problem: Blueberry Waffle
-------------------------------------------------------
Description
You are using a waffle maker machine to make a delicious blueberry waffle. One side of your waffle is covered in blueberries, while the other side is plain. Initially, the cooking pan of the waffle maker lies horizontally, and the blueberries are on the top side of the waffle. Once started, the cooking pan will rotate at a constant speed for a fixed duration, then stop. The cooking time is set so that when the waffle maker stops, the cooking pan will not be in a vertical position.

If the cooking pan is not horizontal after this time, the waffle maker will return to a horizontal position via the smallest rotation possible. Therefore, the waffle maker will rotate less than 90 degrees, either forward or backward, until the cooking pan is horizontal again.

The pan rotates at a rate of 180 degrees every r seconds, and stops after f seconds. You don’t want to take out your waffle with its blueberry side down. Therefore you’d like to figure out whether the blueberry side of the waffle is up or down after the cooking pan returns to a horizontal position.
-------------------------------------------------------
Input
The single line of input contains two integers r and f (1 <= r, f <= 10^4). The pan rotates at a rate of 180 degrees every r seconds, and stops after f seconds. It is guaranteed that after f seconds the cooking pan is not at a vertical position.
-------------------------------------------------------
Output
Output a single line with a single string, which is up if the blueberry side of the waffle is up, or down otherwise.
-------------------------------------------------------
"""

inputs = input().split()

r = int(inputs[0])
f = int(inputs[1])

intermediate = 180 / r * f

turns = intermediate // 180

remainder = intermediate - turns * 180

if turns % 2 == 0:
    if remainder > 90:
        print("down")
    else:
        print("up")
elif turns % 2 != 0:
    if remainder < 90:
        print("down")
    else:
        print("up")


