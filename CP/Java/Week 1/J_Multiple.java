//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

import java.util.Scanner;
public class J_Multiple {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();

        if (A % B == 0 || B % A == 0) {
            System.out.println("Multiples");
        } else {
            System.out.println("No Multiples");
        }
    }
}
/*
    input
    9 3
    output
    Multiples

    input
    6 24
    output
    Multiples

    input
    12 5
    output
    No Multiples
 */