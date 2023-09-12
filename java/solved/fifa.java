package solved;
/*
-------------------------------------------------------
Problem: Framtíðar FIFA
-------------------------------------------------------
Description
Since you know the FIFA games only receive k improvements every year, and you know you entered the FreezeChamber 9000 in the year 2022, you can determine what year it is.
-------------------------------------------------------
Input
The input consists of two lines. The first line contains an integer n (0 <= n <= 2 * 10^9), the number of improvements since you were frozen. The second line contains an integer k (1 <= k <= 10^3), the number of improvements the game receives every year. Every year there is one new version of the game released and it's released on the first day of the year.
-------------------------------------------------------
Output
Print the current year.
-------------------------------------------------------
*/

import java.util.*;
public class fifa {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        System.out.print(2022 + n / k);

        scanner.close();
    }
}