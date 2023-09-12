package solved;
/*
-------------------------------------------------------
Problem: Square Peg
-------------------------------------------------------
Description
You know the old saying: You can’t fit a square peg in a round hole!

Well, obviously you can if the hole is big enough. I guess you can’t fit a square peg into a round hole that is sufficiently small.

Given the side length L of a square peg and the radius R of a circular hole, determine if a square with side length L can be placed within a circle of radium R.
-------------------------------------------------------
Input
Input consists of two space-separated integers L, R (1<=L, R <= 1000) on a single line.
-------------------------------------------------------
Output
If a square of side length L can fit in a circle with radius R, output a single line with the phrase fits. Otherwise, the square cannot fit within the circle then output a single line with the phrase nope.
-------------------------------------------------------
*/

import java.util.*;
public class square_peg {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double L, R;

        L = scanner.nextDouble();
        R = scanner.nextDouble();

        double square_R = Math.sqrt(Math.pow(L/2 , 2D) * 2D);

        if (square_R > R) {
            System.out.println("nope");
        } else {
            System.out.println("fits");
        }
        

        scanner.close();
    }
}