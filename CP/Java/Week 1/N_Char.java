// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

import java.util.Scanner;
public class N_Char {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char x = scanner.next().charAt(0);
        char convertedChar;
        if (Character.isLowerCase(x)) {
            // Convert lowercase to uppercase
            convertedChar = Character.toUpperCase(x);
        } else {
            // Convert uppercase to lowercase
            convertedChar = Character.toLowerCase(x);
        }
        System.out.println(convertedChar);
    }
}

/*
    input
    a
    output
    A
 */