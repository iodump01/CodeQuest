//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

import java.util.Scanner;
public class Y_The_Last_2_Digits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt(); // Number A
        int b = scanner.nextInt(); // Number B
        int c = scanner.nextInt(); // Number C
        int d = scanner.nextInt(); // Number D

        int multiplication = a * b * c * d; // Calculate the multiplication

        int lastTwoDigits = multiplication % 100; // Get the last 2 digits

        System.out.println(lastTwoDigits); // Print the last 2 digits
    }
}

/*      input
        5 7 2 4
        output
        80

        input
        3 9 9 9
        output
        87
 */
