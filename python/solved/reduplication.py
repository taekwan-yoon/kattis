"""
Link: https://open.kattis.com/problems/reduplikation
"""

pattern = input()
count = int(input())

final = ""

for i in range(count):
    final += pattern

print(final)

