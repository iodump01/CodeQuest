// https://codeforces.com/problemset/problem/758/A

import java.util.Scanner;
public class A_Holiday_of_Equality {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int maxWelfare = 0;
        int totalWelfare = 0;
        for (int i = 0; i < n; i++) {
            int welfare = scanner.nextInt();
            maxWelfare = Math.max(maxWelfare, welfare);
            totalWelfare += welfare;
        }

        int minimumBurles = maxWelfare * n - totalWelfare;

        System.out.println(minimumBurles);
    }
}
/*
Input
5
0 1 2 3 4

Output
10
 */
