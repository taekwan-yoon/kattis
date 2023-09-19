package solved;
/*
-------------------------------------------------------
Problem: 
-------------------------------------------------------
Description

-------------------------------------------------------
Input

-------------------------------------------------------
Output

-------------------------------------------------------
*/

import java.util.*;
public class stafur {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String ch = scanner.next();

        char ch2 = ch.charAt(0);

        switch(ch2){
            case 'A':
                System.out.println("Jebb");
                break;
            case 'E':
                System.out.println("Jebb");
                break;
            case 'I':
                System.out.println("Jebb");
                break;
            case 'O':
                System.out.println("Jebb");
                break;
            case 'U':
                System.out.println("Jebb");
                break;
            case 'Y':
                System.out.println("Kannski");
                break;
            default:
                System.out.println("Neibb");
        }

        scanner.close();
    }
}