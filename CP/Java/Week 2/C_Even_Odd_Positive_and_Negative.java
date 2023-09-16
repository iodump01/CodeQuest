// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
import java.util.Scanner;
public class C_Even_Odd_Positive_and_Negative {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // Read the number of values

        int evenCount = 0;
        int oddCount = 0;
        int positiveCount = 0;
        int negativeCount = 0;

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();

            if (x % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }

            if (x > 0) {
                positiveCount++;
            } else if (x < 0) {
                negativeCount++;
            }
        }
        System.out.println("Even: " + evenCount);
        System.out.println("Odd: " + oddCount);
        System.out.println("Positive: " + positiveCount);
        System.out.println("Negative: " + negativeCount);
    }
}
/*
    input
    5
    -5 0 -3 -4 12
    output
    Even: 3
    Odd: 2
    Positive: 1
    Negative: 3
 */

