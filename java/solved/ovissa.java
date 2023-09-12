package solved;
/*
-------------------------------------------------------
Problem: Óvissa
-------------------------------------------------------
Description
Unnar is sure of many things in his life. It is in fact so rare that Unnar is uncertain, that it is important to measure his level of uncertainty when he is. He says ‘u’ when he is uncertain. Unnar’s level of uncertainty is measured by the duration of his ‘u’. For example, if Unnar says ‘uuuuu’, then his level of uncertainty is 5.
-------------------------------------------------------
Input
Input consists of a single line which represents the sound Unnar made the last time he was uncertain. There will be at least one and at most 100 000 symbols in the input.
-------------------------------------------------------
Output
Output one integer, Unnar’s level of uncertainty.
-------------------------------------------------------
*/

import java.util.Scanner;

public class ovissa {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String text = scanner.next();
        int count = 0;
        for (int i=0; i<text.length(); i++){
            if (text.charAt(i) == 'u'){
                count++;
            }
        }

        System.out.print(count);

        scanner.close();

    }
}