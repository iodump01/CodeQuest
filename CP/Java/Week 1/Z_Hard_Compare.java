// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
import java.util.Scanner;
public class Z_Hard_Compare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long a = scanner.nextLong();
        long b = scanner.nextLong();
        long c = scanner.nextLong();
        long d = scanner.nextLong();

        if (a * b > c * d) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}

/*
    input
    3 2 5 4
    output
    NO

    input
    5 2 4 2
    output
    YES

    input
    5 2 5 2
    output
    NO
 */
