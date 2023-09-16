// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

import java.util.Arrays;
import java.util.Scanner;

public class T_Sort_Numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int[] arr = {a, b, c};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
        System.out.println(a+" "+b+" "+c+" ");
    }
    static void bubble(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 1; j < arr.length - i; j++) {
                if (arr[j] < arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }
}
/*
    input
    3 -2 1
    output
    -2
    1
    3

    3
    -2
    1
 */

