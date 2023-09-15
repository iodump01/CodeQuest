// https://codeforces.com/problemset/problem/1374/A

import java.util.Scanner;
public class A_Required_Remainder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt(); // Number of test cases

        for (int i = 0; i < t; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int n = scanner.nextInt();

            int k = ((n - y) / x) * x + y;

            System.out.println(k);
        }
    }
}

/*
Input
7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999

Output
12339
0
15
54306
999999995
185
999999998

 */
