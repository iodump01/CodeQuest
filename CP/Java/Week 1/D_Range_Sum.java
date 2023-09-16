// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

import java.util.Scanner;
public class D_Range_Sum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        for (int i = 0; i < t; i++) {
            int l = scanner.nextInt(); // Left bound
            int r = scanner.nextInt(); // Right bound
            long sum = getRangeSum(l, r); // Calculate the sum
            System.out.println(sum); // Print the sum
        }
    }
    public static long getRangeSum(int l, int r) {
        // Using the formula for the sum of an arithmetic series
        // Sum = (n / 2) * (firstTerm + lastTerm)
        long n = r - l + 1; // Number of terms in the range
        long firstTerm = l;
        long lastTerm = r;
        long sum = (n * (firstTerm + lastTerm)) / 2;
        return sum;
    }
}
/*
    input
    4
    3 6
    2 11
    4 16
    7 17
    output
    18
    65
    130
    132
 */