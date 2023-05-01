"""
-------------------------------------------------------
Problem: Last Factorial Digit
-------------------------------------------------------
Description
The factorial of N, written as N!, is defined as the product of all the integers from 1 to N. For example, 3! = 1 X 2 X 3 = 6

This number can be very large, so instead of computing the entire product, just compute the last digit of N! (when N! is written in base 10).
-------------------------------------------------------
Input
The first line of input contains a positive integer 1 <= T <= 10, the number of test cases. Each of the next T lines contains a single positive integer N. N is at most 10.
-------------------------------------------------------
Output
For each value of N, print the last digit of N!.
-------------------------------------------------------
"""

iterations = int(input())

def factorial(N):
    product = 1
    for i in range(N):
        product *= (i+1)
        product %= 10
    return product

for i in range(iterations):
    N = int(input())
    product = factorial(N)
    print(product)