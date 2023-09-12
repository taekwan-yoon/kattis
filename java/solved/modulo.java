package solved;
/*
-------------------------------------------------------
Problem: Modulo
-------------------------------------------------------
Description
Given two integers A and B, A modulo B is the remainder when dividing A by B. For example, the numbers 7, 14, 27, 38 become 1, 2, 0, and 2, modulo 3. Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42.
-------------------------------------------------------
Input
The input will contain 10 non-negative integers, each smaller than 1000, one per line.
-------------------------------------------------------
Output
Output the number of distinct values when considered modulo 42 on a single line.
-------------------------------------------------------
*/

import java.util.*;
public class modulo {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] numbers = new int[10];

        for (int i=0; i<10; i++){
            numbers[i] = scanner.nextInt();
        }

        Set<Integer> remainders = new HashSet<Integer>();

        for (int i=0; i<10; i++){
            remainders.add(numbers[i] % 42);
        }

        System.out.print(remainders.size());

        scanner.close();
    }
}