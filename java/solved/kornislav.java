package solved;
/*
-------------------------------------------------------
Problem: Kornislav
-------------------------------------------------------
Description
Kornislav the turtle never has anything interesting to do. Since he’s going to live for three hundred years, he keeps trying to find way to kill time. This weekend he started playing "enclose the largest rectangle".

To start with, Kornislav needs four positive integers. He tries to enclose a rectangle by moving in one direction, then turning 90 degrees, then walking in the new direction etc. Kornislav makes a total of three 90-degree turns and walks four segments.

When walking in some direction, the number of steps he takes must be equal to one of the four chosen integers and each integer must be used exactly once. Depending on the order in which Kornislav uses the integers, his walk will make various shapes, some of which don’t contain enclosed rectangles. Write a program that calculates the largest rectangle the turtle can enclose with its walk.
-------------------------------------------------------
Input
The first line contains four positive integers A, B, C, and D (0 < A, B, C, D < 100), the four chosen integers.
-------------------------------------------------------
Output
Output the largest area.
-------------------------------------------------------
*/

import java.util.*;
public class kornislav {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] sides = new int[4];

        for (int i=0; i<4; i++){
            sides[i] = scanner.nextInt();
        }

        Arrays.sort(sides);

        System.out.println(sides[0] * sides[2]);

        scanner.close();
    }
}