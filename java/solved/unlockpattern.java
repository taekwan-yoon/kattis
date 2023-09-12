package java.solved;
/*
-------------------------------------------------------
Problem: Unlock Pattern
-------------------------------------------------------
Description
Mobile phones may require passcodes to unlock, but people sometimes forget their passcodes. An alternative is the 9-pivot unlock pattern. Some people find such a graphical pattern easier to remember than a sequence of digits. Formally, an unlock pattern is a single stroke that visits each of the nine pivots exactly once. The pattern may start at any pivot. It may pass a pivot multiple times but only the first time counts as a visit. The phone unlocks if the pivots are visited in a predefined secret order.
A pattern is more complex if the total length of the stroke is longer. Given an unlock pattern, can you calculate its length? We assume that the pivots are aligned on a unit grid, and the stroke moves in a straight line between two consecutive pivots.

The sample input corresponds to the unlock pattern in the image.
-------------------------------------------------------
Input
The input has three lines. Each line has three non-zero digits separated by a single space. The digits describe the order in which the pivots are visited. Every digit from 1 to 0 appears exactly once.
-------------------------------------------------------
Output
Output the total length of the unlock pattern. Your answer is considered correct if it has an absolute or relative error of at most 10^-6 from the correct answer.
-------------------------------------------------------
*/

import java.util.Scanner;

public class unlockpattern {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int number;

        int[][] sequence = new int[9][2];

        number = scanner.nextInt();
        sequence[number-1] = new int[]{0, 2};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{1, 2};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{2, 2};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{0, 1};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{1, 1};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{2, 1};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{0, 0};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{1, 0};

        number = scanner.nextInt();
        sequence[number-1] = new int[]{2, 0};

        double length = 0;

        for (int i=0; i < 8; i++) {
            length += Math.sqrt(Math.pow((sequence[i][0] - sequence[i+1][0]), 2) + Math.pow((sequence[i][1] - sequence[i+1][1]), 2));
        }
        
        System.out.print(length);

        scanner.close();
    }
}
