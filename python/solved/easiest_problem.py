"""
-------------------------------------------------------
Problem: The Easiest Problem Is This One
-------------------------------------------------------
Description
Your task is to find the smallest positive integer p among those that will result in the same sum of the digits when multiplied by N. To make the task a little bit more challenging, the number must also be higher than ten.
-------------------------------------------------------
Input
The input consists of several test cases. Each case is described by a single line containing one positive integer number N, 1 <= N <= 100 000. The last test case is followed by a line containing zero.
-------------------------------------------------------
Output
For each test case, print one line with a single integer number p which is the minimal number such that N * p has the same sum of digits as N and p is bigger than 10.
-------------------------------------------------------
"""

number = input()
answers = []

while number != '0':

    total = 0
    for i in number:
        total += int(i)

    number2 = 11

    while True:
        product = int(number) * number2
        total2 = 0
        for i in str(product):
            total2 += int(i)
        
        if total == total2:
            break

        number2 += 1

    answers.append(number2)

    number = input()

for i in answers:
    print(i)




