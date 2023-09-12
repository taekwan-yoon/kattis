"""
-------------------------------------------------------
Problem: Hraðgreining
-------------------------------------------------------
Description
Most Icelanders have found it hard to miss how many COVID tests have been performed in their country to figure out whether people have Covid or not. At designated testing locations, samples are taken from both the nose and mouth. They are then put into a DNA sequencer which returns a DNA string. This string consists of the letters ACGTOV. This has made it significantly easier to diagnose whether people have Covid, since one only has to check whether the DNA string contains the substring COV. Could you help the employees at the testing location in figuring out whether the DNA string contains the substring COV?
-------------------------------------------------------
Input
A single line containing the DNA string.
-------------------------------------------------------
Output
If the DNA string contains the substring COV then print Veikur!, otherwise print Ekki veikur!.
-------------------------------------------------------
"""

DNA = input()

if "COV" in DNA:
    print("Veikur!")
else:
    print("Ekki veikur!")



