package solved;
/*
-------------------------------------------------------
Problem: Monopoly
-------------------------------------------------------
Description
Doris is playing monopoly with her friends, and it is now her turn to roll the dice. In standard monopoly you roll two 6-sided dice, and then walk the same number of steps as the sum of the two dice. From her current position, she will end up on her opponents’ hotels if the sum is equal to one of the integers A_1, ..., A_N. What is the probability that she will end up on one of her opponents’ hotels during her current turn? You do not have to consider the rule about rerolling if both dice show the same number or any other rule from monopoly.
-------------------------------------------------------
Input
The first line consists of an integer N (1<= N <= 11), the number of hotels the opponents own. The second line consists of N integers A_1, ..., A_N (2 <= A_1 < ... < A_N <= 12), the distances to each of the opponents' N hotels.
-------------------------------------------------------
Output
Output a decimal, the probability that the sum of the two dice is one of the numbers A_1,...,A_N. Your answer will be considered correct if its absolute error does not exceed 10^-4.
-------------------------------------------------------
*/
import java.util.Scanner;

public class monopol {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();

        int[] hotels = new int[num];

        for (int i=0; i<num; i++){
            hotels[i] = scanner.nextInt();
        }
        int count = 0;
        int sum;
        for (int i=1; i<7; i++){

            for (int j=1; j<7; j++){
                sum = i + j;

                for (int hotel : hotels) {
                    if (hotel == sum) {
                        count++;
                        break;
                    }
                }
            }
        }

        System.out.print((double)count / 36D);


        scanner.close();
    }
}
