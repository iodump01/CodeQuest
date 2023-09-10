// https://codeforces.com/problemset/problem/320/A

import java.util.Scanner;
public class A_Magic_Numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String str = Integer.toString(n);

        boolean isMagic = isMagicNumber(str);
        if (isMagic) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
    public static boolean isMagicNumber(String str) {
        while (!str.isEmpty()) {
            if (str.startsWith("144")) {
                str = str.substring(3); // Remove the "144" prefix
            } else if (str.startsWith("14")) {
                str = str.substring(2); // Remove the "14" prefix
            } else if (str.startsWith("1")) {
                str = str.substring(1); // Remove the "1" prefix
            } else {
                return false; // If none of the magic number prefixes match, it's not a magic number
            }
        }
        return true; // If we successfully removed all magic numbers, it's a magic number
    }
}

/*
Input
114114

Output
YES

 */
