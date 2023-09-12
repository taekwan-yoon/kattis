package solved;
/*
-------------------------------------------------------
Problem: Parking
-------------------------------------------------------
Description
When shopping on Long Street, Michael usually parks his car at some random location, and then walks to the stores he needs. Can you help Michael choose a place to park which minimises the distance he needs to walk on his shopping round?
Long Street is a straight line, where all positions are integer. You pay for parking in a specific slot, which is an integer position on Long Street. Michael does not want to pay for more than one parking though. He is very strong, and does not mind carrying all the bags around.
-------------------------------------------------------
Input
The first line of input gives the number of test cases, 1 <= t <= 100. There are two lines for each test case. The first gives the number of stores Michael wants to visit, 1 <= n <= 20, and the second gives their n integer positions on Long Street, 0 <= x_i <= 99.
-------------------------------------------------------
Output
Output for each test case a line with the minimal distance Michael must walk given optimal parking.
-------------------------------------------------------
*/

import java.util.*;
public class parking2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int test_cases = scanner.nextInt();
        int stores;

        int[] answers = new int[test_cases];

        for (int i=0; i<test_cases; i++){
            stores = scanner.nextInt();
            int[] positions = new int[stores];

            for (int j=0; j<stores; j++){
                positions[j] = scanner.nextInt();
            }
            Arrays.sort(positions);
            int whole_distance = positions[0] - positions[stores-1];
            if (whole_distance < 0) {
                whole_distance = whole_distance * -1;
            }
            answers[i] = whole_distance*2;
        }

        for (int i=0; i<test_cases; i++){
            System.out.println(answers[i]);
        }

        scanner.close();
    }
}