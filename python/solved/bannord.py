"""
-------------------------------------------------------
Problem: bannord
-------------------------------------------------------
Description
The office life is a blast, constant excitement and never a frown in sight. But this lasseiz-faire attitude leads to carelessness. A recent example of this is when you asked your receptionist to write a memo but, in a bout of enjoyment, he forgot the only (and therefore most important) rule in the office: No memo should include forbidden letters. The forbidden letters are decided each week by the management, and a word that contains a forbidden letter is a forbidden word. Worst of all, it is 3.59pm on a Friday. Is there any way to quickly black out the forbidden words?
-------------------------------------------------------
Input
The first line of the input contains a non-empty string S. The string S contains lower case letters of the English alphabet and none of which is repeated. The next line of the input contains the string M. The string M contains only lower case letters and spaces and is not longer than 10^5 characters. There are no adjacent spaces in M. The string S corresponds to this weeks forbidden letters and the string M corresponds to the memo.
-------------------------------------------------------
Output
The only line of the output should contain the memo, but every letter in every forbidden word should be replaced by ,,*”.
-------------------------------------------------------
"""

forbidden = input()

sentence = input().split()

for ch in forbidden:
    
    for i in range(len(sentence)):

        if ch in sentence[i]:
            sentence[i] = ('*' * len(sentence[i]))

print(' '.join(sentence))



