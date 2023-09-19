"""
-------------------------------------------------------
Problem: What does the fox say?
-------------------------------------------------------
Description
Determined to discover the ancient mystery—the sound that the fox makes—you went into the forest, armed with a very good digital audio recorder. The forest is, however, full of animals’ voices, and on your recording, many different sounds can be heard. But you are well prepared for your task: you know exactly all the sounds which other animals make. Therefore the rest of the recording—all the unidentified noises—must have been made by the fox.
-------------------------------------------------------
Input
The first line of input contains the number of test cases T. The descriptions of the test cases follow:

The first line of each test case contains the recording—words over lower case English alphabet, separated by spaces. Each contains at most 100 letters and there are no more than 100 words. The next few lines are your pre-gathered information about other animals, in the format <animal> goes <sound>. There are no more than 100 animals, their names are not longer than 100 letters each and are actual names of animals in English. There is no fox goes ... among these lines.

The last line of the test case is exactly the question you are supposed to answer: what does the fox say?
-------------------------------------------------------
Output
For each test case, output one line containing the sounds made by the fox, in the order from the recording. You may assume that the fox was not silent (contrary to popular belief, foxes do not communicate by Morse code).
-------------------------------------------------------
"""

num = int(input())
answers = []

for i in range(num):
    
    sounds = input().split()

    sentence = input()
    
    while (sentence != "what does the fox say?"):

        sound = sentence.split()[2]
        
        while sound in sounds:

            sounds.remove(sound)   

        sentence = input()


    answers.append(' '.join(sounds))

for sound in answers:
    print(sound)

