// https://codeforces.com/problemset/problem/271/A

import java.util.Scanner;

public class A_Beautiful_Year {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int y = scanner.nextInt();

        while (true) {
            y++;
            if (hasDistinctDigits(y)) {
                System.out.println(y);
                break;
            }
        }
    }
    static boolean hasDistinctDigits(int n) {
        boolean[] seen = new boolean[10];
        while (n > 0) {
            int digit = n % 10;
            if (seen[digit]) {
                return false;
            }
            seen[digit] = true;
            n /= 10;
        }
        return true;
    }
}

/*
Input
1987

Output
2013

 */













