// https://codeforces.com/problemset/problem/199/A

import java.util.Scanner;
public class A_Hexadecimals_Theorem {
    static long[] dp = new long[100];

    public static void main(String[] args) {
        fib();
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        if (num <= 2) {
            if (num == 0)
                System.out.println("0 0 0");
            else if (num == 1)
                System.out.println("0 0 1");
            else
                System.out.println("0 1 1");
        } else {
            boolean ck = false;
            int x = 0, y = 0, z = 0;
            for (int i = 0; dp[i] < num; i++) {
                for (int j = i; dp[j] < num; j++) {
                    for (int k = j; dp[k] < num; k++) {
                        long made = dp[i] + dp[j] + dp[k];
                        if (made == num) {
                            x = (int) dp[i];
                            y = (int) dp[j];
                            z = (int) dp[k];
                            ck = true;
                            break;
                        } else if (made > num) {
                            ck = false;
                            break;
                        }
                    }
                    if (ck) break;
                }
                if (ck) break;
            }
            if (!ck) {
                System.out.println("I'm too stupid to solve this problem");
            } else {
                System.out.println(x + " " + y + " " + z);
            }
        }
    }

    static void fib() {
        long a = 0, b = 1, c;
        for (int i = 0; i <= 50; i++) {
            c = a + b;
            a = b;
            b = c;
            dp[i] = a;
        }
    }
}
/*
Input
3
Output
1 1 1

 */