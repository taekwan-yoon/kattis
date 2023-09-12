"""
-------------------------------------------------------
Problem: Zamka
-------------------------------------------------------
Description
The impossible has happened. Bear G. has fallen into his own trap. Lured by a delicious box of Domaćica, without even thinking, he rushed and fell into his trap. In order to get out of the trap, he must solve the following task with your help. You are given three integers L, D and X.
- Determine the minimal integer N such that L <= N <= D and the sum of its digits is X
- Determine the maximumal integer M such that L <= M <= D and the sum of its digits is X
-------------------------------------------------------
Input
The first line of input contains the integer L (1 <= L <= 10000), the number from the task. The second line of input contains the integer D (1 <= D <= 10000, L <= D), the number from the task. The third line of input contains the integer X (1 <= X <= 36), the number from the task. 
-------------------------------------------------------
Output
The first line of output must contain the integer N from the task. The second line of output must contain the integer M from the task.
-------------------------------------------------------
"""

L = int(input())

D = int(input())

X = int(input())

N = None
M = None

for i in range(L, D+1):
    sumN = 0
    str_N = str(i)
    for ch in str_N:
        sumN += int(ch)

    if sumN == X:
        N = i

for i in range(D, L-1, -1):
    sumM = 0
    str_M = str(i)
    for ch in str_M:
        sumM += int(ch)
    
    if sumM == X:
        M = i

print(M)
print(N)


