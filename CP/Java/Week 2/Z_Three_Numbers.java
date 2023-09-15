// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

import java.util.Scanner;
public class Z_Three_Numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int k = scanner.nextInt();
        int s = scanner.nextInt();
        int count = 0;

        for (int x=0; x<=k; x++) {
            for (int y = 0; y <= k; y++) {
                int z = s-x-y;
                if (z>=0 && z<=k) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
/*
    input
    2 1
    output
    3

    input
    9 4
    output
    15
 */
