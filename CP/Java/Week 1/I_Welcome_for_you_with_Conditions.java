// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I

import java.util.Scanner;

    public class I_Welcome_for_you_with_Conditions {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            int a = scanner.nextInt(); // Number A
            int b = scanner.nextInt(); // Number B

            if (a >= b) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
/*
input
10 9
output
Yes

input
5 5
output
Yes

input
5 7
outputC
No
 */


