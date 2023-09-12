package solved;
/*
-------------------------------------------------------
Problem: Free Food
-------------------------------------------------------
Description
Do you know what attracts almost any college student to participate in an event? Yes, free food. It doesn’t matter whether the event involves a long (sometimes boring) seminar. As long as free food is served for the event, then students will surely come.

Suppose there are N events to be held this year. The ith event is scheduled from day s_i to day t_i, and free food is served for that event every day from day s_i to day t_i (inclusive). Your task in this problem is to find out how many days there are in which free food is served by at least one event.
-------------------------------------------------------
Input
The first line contains an integer N (1 <= N <= 100) denoting the number of events. Each of the next N lines contains two integers s_i and t_i (1 <= s_i <= t_i <= 365) denoting that the i^th event will be held from s_i to t_i (inclusive), and free food is served fod all of those days.
-------------------------------------------------------
Output
The output contains an integer denoting the number of days in which free food is served by at least one event.
-------------------------------------------------------
*/

import java.util.*;
public class freefood {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Set<Integer> days = new HashSet<Integer>();

        int num = scanner.nextInt();

        for (int i=0; i<num; i++){
            int start = scanner.nextInt();
            int end = scanner.nextInt();

            for (int j=start; j<=end; j++){
                days.add(j);
            }
        }

        System.out.print(days.size());


        scanner.close();
    }
}