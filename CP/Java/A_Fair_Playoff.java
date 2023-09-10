//https://codeforces.com/problemset/problem/1535/A

import java.util.Scanner;
public class A_Fair_Playoff {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        for (int i = 0; i < t; i++) {
            int x = scanner.nextInt();
            int z = scanner.nextInt();
            int y = scanner.nextInt();
            int e = scanner.nextInt();

            if ((Math.max(x, z) < Math.min(y, e)) || (Math.max(y, e) < Math.min(x, z))) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }
}

/*
Input
4
3 7 9 5
4 5 6 9
5 3 8 1
6 5 3 2

Output
YES
NO
YES
NO

 */
