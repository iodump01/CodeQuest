// https://codeforces.com/problemset/problem/630/A

import java.util.Scanner;
public class A_Again_Twenty_Five {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        long n = sc.nextLong();
        if(n==0){
            System.out.println("01");
        }
        if(n==1){
            System.out.println("05");
        }
        if(n>1){
            System.out.println("25");
        }
    }
}
/*
        inputC
        2
        outputC
        25

 */