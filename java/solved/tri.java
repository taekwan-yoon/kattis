package solved;
/*
-------------------------------------------------------
Problem: Tri
-------------------------------------------------------
Description
Little Mirko wrote into his math notebook an equation containing three positive integers, the equals sign and one of the four basic arithmetic operations (addition, subtraction, multiplication and division).

During another class, his friend Slavko erased the equals sign and the operations from Mirko’s notebook. Help Mirko by reconstructing the equation from the three integers
-------------------------------------------------------
Input
The first line of input contains three integers less than 100, separated by spaces. The input data will guarantee that a solution, although not necessarily unique, will always exist.
-------------------------------------------------------
Output
On a single line, output a valid equation containing the three integers (in the same order), an equals sign and one of the four operations. If there are multiple solutions, output any of them.
-------------------------------------------------------
*/

import java.util.*;
public class tri {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x, y, z;
        char first_op = ' ';
        char second_op = ' ';
        x = scanner.nextInt();
        y = scanner.nextInt();
        z = scanner.nextInt();
        String answer = "";

        if (x+y==z){
            first_op = '+';
            second_op = '=';
        } else if (x-y==z){
            first_op = '-';
            second_op = '=';
        } else if (x*y==z){
            first_op = '*';
            second_op = '=';
        } else if (x/y==z){
            first_op = '/';
            second_op = '=';
        } else if (x==y+z){
            first_op = '=';
            second_op = '+';
        } else if (x==y-z){
            first_op = '=';
            second_op = '-';
        } else if (x==y*z){
            first_op = '=';
            second_op = '*';
        } else if (x==y/z) {
            first_op = '=';
            second_op = '/';
        }

        answer += Integer.toString(x);
        answer += first_op;
        answer += Integer.toString(y);
        answer += second_op;
        answer += Integer.toString(z);

        System.out.println(answer);

        scanner.close();
    }
}