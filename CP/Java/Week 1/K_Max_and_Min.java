// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
import java.util.Scanner;
public class K_Max_and_Min {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt(); // Number A
        int b = scanner.nextInt(); // Number B
        int c = scanner.nextInt();
        int min, max;
        // Find minimum
        if (a <= b && a <= c) {
            min = a;
        } else if (b <= a && b <= c) {
            min = b;
        } else {
            min = c;
        }
        // Find maximum
        if (a >= b && a >= c) {
            max = a;
        } else if (b >= a && b >= c) {
            max = b;
        } else {
            max = c;
        }

        System.out.println(min + " " + max);
    }
}
/*
input
1 2 3
output
1 3

input
-1 -2 -3
output
-3 -1

input
10 20 -5
output
-5 20
 */
