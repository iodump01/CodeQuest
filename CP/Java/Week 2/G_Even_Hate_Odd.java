// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

import java.util.Scanner;
public class G_Even_Hate_Odd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            int[] a = new int[n];

            for (int j = 0; j < n; j++) {
                a[j] = scanner.nextInt();
            }

            int evenCount = 0;
            int oddCount = 0;

            // Count the number of even and odd elements in the array
            for (int num : a) {
                if (num % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }
            // If the sum of evenCount and oddCount is not even, it's impossible
            if ((evenCount + oddCount) % 2 != 0) {
                System.out.println("-1");
            } else {
                // The minimum number of operations required is the absolute difference between
                // the counts of even and odd elements divided by 2
                int operations = Math.abs(evenCount - oddCount) / 2;
                System.out.println(operations);
            }
        }
    }
}
/*
input
3
4
1 2 3 4
4
1 1 1 1
3
1 2 3
output
0
2
-1
 */
