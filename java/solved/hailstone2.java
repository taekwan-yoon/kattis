/*
-------------------------------------------------------
Problem: Hailstone Sequences
-------------------------------------------------------
Description
Given an integer n, its hailstone sequence is constructed in the following way. First, the integer n is itself added as the first number of the sequence. The following procedure is then repeated. If the last integer a added to the sequence is even, we add a/2 to the sequence. If it is odd, we add 3a + 1 to the sequence. Whenever the integer 1 is added to the sequence, the procedure concludes and the sequence generated is the hailstone sequence of n.
-------------------------------------------------------
Input
The input consists of an integer n (1 <= n <= 10^12).
-------------------------------------------------------
Output
Output a single integer – the length of the sequence.
-------------------------------------------------------
*/

package java.solved;
import java.util.Scanner;

public class hailstone2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long number = scanner.nextLong();

        int count = 1;

        while (number != 1 && number != 0){
            if (number % 2 == 0) {
                number /= 2;
                count++;
            } else {
                number = 3*number + 1;
                count++;
            }
        }
        System.out.print(count);
        scanner.close();
    }
}
