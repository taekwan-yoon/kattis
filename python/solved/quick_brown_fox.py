"""
-------------------------------------------------------
Problem: Quick Brown Fox
-------------------------------------------------------
Description
A pangram is a phrase that includes at least one occurrence of each of the 26 letters, ‘a’...‘z’. You’re probably familiar with this one: “The quick brown fox jumps over the lazy dog.”
Your job is to recognize pangrams. For phrases that don’t contain every letter, report what letters are missing. We’ll say that a particular letter occurs in the phrase if it occurs as either upper case or lower case.
-------------------------------------------------------
Input
Input starts with a line containing an integer 1 <= N <= 50. The next N lines are each a single phrase, possibly containing upper and lower case letters, spaces, decimal digits and punctuation characters '.', ',', '?', '`' and '"'. Each phrase contains at least one and no more than 100 characters.
-------------------------------------------------------
Output
For each input phrase, output “pangram” if it qualifies as a pangram. Otherwise, output the word “missing” followed by a space and then the list of letters that didn’t occur in the phrase. The list of missing letters should be reported in lower case and should be sorted alphabetically.
-------------------------------------------------------
"""

num = int(input())

alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
answers = []

for i in range(num):
    contained_alphabets = set()
    not_contained = set()

    sentence = input().lower()

    for ch in alphabets:
        if ch in sentence:
            contained_alphabets.add(ch)
        else:
            not_contained.add(ch)

    not_contained = sorted(not_contained)
    
    if len(contained_alphabets) == 26:
        answers.append("pangram")
    else:
        answer = "missing "
        for ch in not_contained:
            answer += ch
        answers.append(answer)

for answer in answers:
    print(answer)

    




