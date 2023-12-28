"""
Link: https://open.kattis.com/problems/meddelande
"""

row, column = map(int, input().split())
final_str = ""

for i in range(row):
    row_str = input()

    for j in range(column):
        if row_str[j] != ".":
            final_str += row_str[j]

print(final_str)