// https://codeforces.com/problemset/problem/1/A

import java.util.Scanner;
public class A_Theatre_Square {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long m = scanner.nextLong();
        long a = scanner.nextLong();
        long rows = n / a;
        if (n % a != 0) {
            rows++;
        }
        long columns = m / a;
        if (m % a != 0) {
            columns++;
        }
        long result = rows * columns;
        System.out.println(result);
    }
}

/*
    input
    6 6 4
    output
    4
 */
