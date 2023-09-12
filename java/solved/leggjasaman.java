package solved;
/*
-------------------------------------------------------
Problem: Leggja saman
-------------------------------------------------------
Description
Arnar and Hannes are parking cars for party guests. When all party guests are seated and all cars have been parked they discuss how many cars they’ve parked.
Arnar tells Hannes how many cars he parked and Hannes tells Arnar how many cars he parked. Now they want to know how many cars they parked in total and ask for your help.
-------------------------------------------------------
Input
The input is on two lines. The first line contains a single integer n (2 <= n <= 1000), the number of cars Arnar parked. The second line contains a single integer m (2 <= m <= 1000), the number of cars Hannes parked.
-------------------------------------------------------
Output
Print a single integer, the total number of cars Arnar and Hannes parked.
-------------------------------------------------------
*/

import java.util.*;
public class leggjasaman {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, m;
        n = scanner.nextInt();
        m = scanner.nextInt();

        System.out.print(n + m);

        scanner.close();
    }
}