"""
-------------------------------------------------------
Problem: Scaling Recipe
-------------------------------------------------------
Description
You’ve got a recipe which specifies a number of ingredients, the amount of each ingredient you will need, and the number of portions it produces. But, the number of portions you need is not the same as the number of portions specified in the recipe! How can you scale it?
-------------------------------------------------------
Input
The first line of input contanis three integers n (1 <= n <= 40), x and y (1 <= x, y <= 40,000), where n is the number of ingredients in the recipe, x is the number of portions that the recipe produces, and y is the number of portions you need. 
Each of the next n lines contains a single integer a (1 <= a <= 40,000). These are the amounts of each ingredient needed for the recipe. 
The inputs will be chosen so that the amount of each ingredient needed for y portions will be an integer.
-------------------------------------------------------
Output
Output n lines. On each line output a single integer, which is the amount of that ingredient needed to produce y portions of the recipe. Output these values in the order of the input.
-------------------------------------------------------
"""
import math
inputs = input().split()
answers = []

n = int(inputs[0])
x = int(inputs[1])
y = int(inputs[2])

scale_factor = y/x

for i in range(n):
    ingredient = int(input())
    answers.append(ingredient * scale_factor)

for i in range(n):
    print(round(answers[i]))




