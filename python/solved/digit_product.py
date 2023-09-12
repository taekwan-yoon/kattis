"""
-------------------------------------------------------
Problem: Digit Product
-------------------------------------------------------
Description
Consider a positive integer x. Multiply its nonzero digits and you get another integer y. Repeating this process, you eventually arrive at a single digit between 1 and 9. Write a program that reads x and outputs the resulting digit.
-------------------------------------------------------
Input
An integer x with 10 <= x <= 1000.
-------------------------------------------------------
Output
Print a digit between 1 and 9, the result of repeatedly multiplying the nonzero digits of x as described above.
-------------------------------------------------------
"""

initial_num = input()

while True:    
    product = 1

    for i in initial_num:
        if i != '0':
            product *= int(i)
    if product < 10:
        break
    initial_num = str(product)
    
print(product)


