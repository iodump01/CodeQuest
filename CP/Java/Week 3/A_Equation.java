// https://codeforces.com/problemset/problem/1269/A

import java.util.Scanner;
public class A_Equation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();

        if (n == 1) {
            System.out.println(9 + " " + 8);
        } else {
            System.out.println(n * 4 + " " + n * 3);
        }
    }
}
/*
Input
1
Output
9 8

 */
