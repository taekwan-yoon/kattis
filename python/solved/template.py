"""
-------------------------------------------------------
Problem: Songbook
-------------------------------------------------------
Description
Doris will be the toastmaster at a dinner with her university chapter. During the evening, they will of course be singing songs! As Doris is quite uninformed of the songs in their songbook, she has choosen to instead pick as many songs as possible during the t minutes allocated for singing. As she is otherwise busy with picking who will speak and what they should say, she has asked for your help in this endeavor.
-------------------------------------------------------
Input
Begins with a row containing two integers, the number of minutes allocated for singing, t < 10^5, and the number of songs in their songbook. Then follows one row with n integers, the expected seconds to sing each song, s_i < t * 60.
-------------------------------------------------------
Output
One row with a single integer, the minimal number of seconds it takes to sing the most amount of songs possible.
-------------------------------------------------------
"""

inputs = input().split()

t = int(inputs[0]) * 60
n = int(inputs[1])

songs = input().split()

songs_int = []
for i in range(len(songs)):
    songs_int.append(int(songs[i]))

songs_int.sort()

i = 0
total = 0
while t >= 0:
    t -= songs_int[i]
    if t >= 0:
        total += songs_int[i]
    elif t < 0:
        pass
    if i == n - 1:
        break
    i += 1
                    
print(total)




