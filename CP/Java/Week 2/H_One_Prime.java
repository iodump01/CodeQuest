// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
import java.util.Scanner;
    public class H_One_Prime {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            int x = scanner.nextInt();
            boolean isPrime = true;

            if (x <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i <= Math.sqrt(x); i++) {
                    if (x % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

/*
   input
   7
   output
   YES

   input
   15
   output
   NO
 */