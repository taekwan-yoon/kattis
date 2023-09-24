package solved;
/*
-------------------------------------------------------
Problem: Yoda
-------------------------------------------------------
Description
A long, long time ago in a galaxy far, far away a big collision of integers is taking place right now. What happens when two integers collide? During collision, each digit of one number compares itself to the corresponding digit of the other number (the least significant digit with the other’s least significant digit, and so on). The smaller digit “falls out” of the number containing it. Additionally, if the digits are the same, nothing happens. If a number doesn’t consist of a corresponding digit, then we consider it to be zero. After all comparisons of corresponding digits, the leftover digits in the number come closer and create a new number. See Figure 1 for an example.
Write a programme that will, for two given integers, determine their values after collision. If it happens that all the digits of one number fell out, then for that number output the message “YODA”.
-------------------------------------------------------
Input
The first line of output must contain the new value of the first given integer from the task. The second line of output must contain the new value of the second given integer from the task.
-------------------------------------------------------
Output
The first line of output must contain the new value of the first given integer from the task. The second line of output must contain the new value of the second given integer from the task.
-------------------------------------------------------
*/

import java.util.*;
public class yoda {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String first = scanner.nextLine();
        String second = scanner.nextLine();

        if (first.length() > second.length()){
            while (first.length() != second.length()) {
                second = '0' + second;
            }
        } else if (first.length() < second.length()){
            while (first.length() != second.length()){
                first = '0' + first;
            }
        }

        String first_result = "";
        String second_result = "";
        for (int i=0; i<first.length(); i++){
            if (first.charAt(i) > second.charAt(i)) {
                first_result += first.charAt(i);
            } else if (first.charAt(i) < second.charAt(i)){
                second_result += second.charAt(i);
            } else if (first.charAt(i) == second.charAt(i)){
                first_result += first.charAt(i);
                second_result += second.charAt(i);
            }
        }

        boolean all_zero = true;

        for (int i=0; i<first_result.length(); i++){
            if (first_result.charAt(i) != '0'){
                all_zero = false;
                break;
            }
        }

        if (all_zero && !first_result.isEmpty()){
            first_result = "0";
        }

        all_zero = true;

        for (int i=0; i<second_result.length(); i++){
            if (second_result.charAt(i) != '0'){
                all_zero = false;
                break;
            }
        }

        if (all_zero && !second_result.isEmpty()){
            second_result = "0";
        }

        if (first_result.isBlank()) {
            System.out.println("YODA");
        } else {
            System.out.println(first_result);
        } 

        if (second_result.isBlank()) {
            System.out.println("YODA");
        } else {
            System.out.println(second_result);
        } 


        scanner.close();
    }
}