// https://codeforces.com/problemset/problem/4/A

import java.util.Scanner;
public class A_Watermelon {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int w = scanner.nextInt();
        if(w%2==0&&w>2){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}

/*
    input
    8
    output
    YES
 */

