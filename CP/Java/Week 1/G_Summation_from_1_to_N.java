// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

import java.util.Scanner;
public class G_Summation_from_1_to_N {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong(); // Number N

        long sum = (n * (n + 1)) / 2; // Calculate the summation

        System.out.println(sum); // Print the summation

    }
}
/*
    input
    3
    output
    6

    input
    10
    output
    55
 */
