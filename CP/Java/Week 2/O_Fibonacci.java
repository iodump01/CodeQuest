// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

import java.util.Scanner;
public class O_Fibonacci {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int fibonacciNumber = fib(n);
        System.out.println(fibonacciNumber);
    }
    public static int fib(int n) {
        if (n == 1) {
            return 0;
        } else if (n == 2) {
            return 1;
        } else {
            return fib(n - 1) + fib(n - 2);
        }
    }
}
/*
   input
   1
   output
   0

   input
   5
   output
   3
 */
