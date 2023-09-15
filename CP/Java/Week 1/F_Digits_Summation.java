// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

import java.util.Scanner;
public class F_Digits_Summation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long N = scanner.nextLong();
        long M = scanner.nextLong();

        // Extract the last digits of N and M
        int lastDN = (int)(N % 10);
        int lastDM = (int)(M % 10);

        // Calculate and print the sum of the last digits
        int sum = lastDN + lastDM;
        System.out.println(sum);
    }
}
/*
     inputCopy
     13 12
     outputCopy
     5
 */
