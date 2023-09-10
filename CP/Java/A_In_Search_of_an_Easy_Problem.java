// https://codeforces.com/problemset/problem/1030/A

import java.util.Scanner;
public class A_In_Search_of_an_Easy_Problem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] opinions = new int[n];
        for (int i = 0; i < n; i++) {
            opinions[i] = scanner.nextInt();
        }

        boolean isHard = false;
        for (int i = 0; i < n; i++) {
            if (opinions[i] == 1) {
                isHard = true;
                break;
            }
        }

        if (isHard) {
            System.out.println("HARD");
        } else {
            System.out.println("EASY");
        }
    }
}

/*
Input
3
0 0 1

Output
HARD

 */

