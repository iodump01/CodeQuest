// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

import java.util.Scanner;
public class L_The_Brothers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String firstName1 = scanner.next(); // First name of person 1
        String secondName1 = scanner.next(); // Second name of person 1

        String firstName2 = scanner.next(); // First name of person 2
        String secondName2 = scanner.next(); // Second name of person 2

        if (secondName1.equals(secondName2)) {
            System.out.println("ARE Brothers");
        } else {
            System.out.println("NOT");
        }
    }
}

/*
input
bassam ramadan
ahmed ramadan
output
ARE Brothers
 */
