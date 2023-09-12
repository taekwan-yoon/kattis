package solved;
/*
-------------------------------------------------------
Problem: Spritt
-------------------------------------------------------
Description
Everyone at Reykjavík University is disinfecting their hands these days and Elvar isn’t sure if there’s enough sanitizer for all the classrooms. Elvar knows how many bottles of sanitizer are available and how many bottles each classroom needs, but because Elvar is very busy he has a hard time finding out whether there’s enough to go around and asks you to help.
-------------------------------------------------------
Input
The first line of the input contains two integers n (1 <= n <= 10^6), the number of classrooms at Reykjavik University, and x (1 <= x <= 10^8), how many bottles of sanitizer are available.

Then there are n lines, one for each classroom, where the i-th line contains one integer a_i (1 <= a_i <= 10^8), how many bottles of sanitizer the i-th classroom needs. The sum of all a_i will not be over 2 * 10^9.
-------------------------------------------------------
Output
Print Jebb if every classroom can receive the bottles they need and print Neibb otherwise.-------------------------------------------------------
*/

import java.util.Scanner;

public class spritt {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int x = scanner.nextInt();

        int[] num_list = new int[n];
        int sum = 0;
        
        for (int i=0; i<n; i++) {
            num_list[i] = scanner.nextInt();
        }

        for (int i=0; i<n; i++) {
            sum += num_list[i];
        }

        if (sum > x) {
            System.out.println("Neibb");
        } else {
            System.out.println("Jebb");
        }
        
        scanner.close();
    }
}
