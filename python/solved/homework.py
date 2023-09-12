"""
-------------------------------------------------------
Problem: Homework
-------------------------------------------------------
Description
Hneitir is a high school student, which means he has to do homework for various subjects. Hneitir is not lazy, but he gets bored studying at home, especially for chemistry. Tomorrow he will have to solve some problems on the board, in front of the class. He doesn’t know exactly which problems he’ll need to solve, but he does have a list of problems that his chemistry teacher, Ormhildur, has mentioned. Hneitir figures that if he solves all of those problems, he will be prepared for class.

Given the list of problems Ormhildur has mentioned, how many problems does Hneitir need to solve?
-------------------------------------------------------
Input
The input is one line and specifies the problems that Hneitir needs to solve. Hneitir always need to solve at least one problem. The problems are numbered from 1 up to 1000 and are listed in ascending order, separated by semicolons(;). If two or more problems are in a row, that range is specified with -. A example of an input is 1-3;5;7;10-13 and this means that Hneitir needs to solve problems 1,2,3,5,7,10,11,12, and 13.
-------------------------------------------------------
Output
Write out one integer n, the number of problems that Hneitir has to solve.
-------------------------------------------------------
"""
pages = 0
ranges = input()

range_list = ranges.split(";")

for range_ in range_list:
    if "-" in range_:
        sub_list = range_.split("-")
        pages += (int(sub_list[1]) - int(sub_list[0]) + 1)
    else:
        pages += 1

print(pages)




