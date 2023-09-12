"""
-------------------------------------------------------
Problem: Moderate Pace
-------------------------------------------------------
Description
An ultra-marathon is a race that takes place over an uncomfortably long distance and time, typically lasting for five hours or more. You are part of a group of three ultra-marathon runners looking to place in this year’s Great South-to-North run from Plymouth to Aberdeen.

You have a set number of days until the next race to train. You will all train together, as training alone can be dangerous. As everyone has their own schedule in mind for how many kilometres to run per day, this will not be easy, you will have to compromise.

The fairest option is to look at each day individually, examine the three options for how far to run, and to take the median one. That is to say, the option taken for each day should be one that is not be greater or lesser than both of the other possibilities at the same time.
-------------------------------------------------------
Input
A line with the integer n (1 <= n <= 1000), the number of days of training.

A line with n integers k_1,..._n (0 <= k <= 10^6), your ideal daily distances.

A line with n integers a_1,...,_n (0 <= a <= 10^6), your first colleague’s ideal daily distances.

A line with n integers b_1,...,n (0 <= b <= 10^6), your second colleague’s ideal daily distances.
-------------------------------------------------------
Output
Output a plan for the n days as n integers, where the distance for every day corresponds to the median of choices for that day.
-------------------------------------------------------
"""
import statistics

n = int(input())

x1 = [int(i) for i in input().split()]

x2 = [int(i) for i in input().split()]

x3 = [int(i) for i in input().split()]

for i in range(n):
    integers = [x1[i], x2[i], x3[i]]
    median = statistics.median(integers)
    print(median, end=' ')

