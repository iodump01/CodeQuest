// https://codeforces.com/problemset/problem/1512/A

import java.util.Scanner;
public class A_Spy_Detected {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt(); // Number of test cases

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt(); // Length of the array
            int[] arr = new int[n]; // Array to store the integers

            // Read the array elements
            for (int j = 0; j < n; j++) {
                arr[j] = scanner.nextInt();
            }

            int uniqueElementIndex = findUniqueElementIndex(arr);
            System.out.println(uniqueElementIndex);
        }
    }

    // Function to find the index of the unique element in the array
    static int findUniqueElementIndex(int[] arr) {
        int n = arr.length;
        int uniqueElementIndex = -1;

        for (int i = 0; i < n; i++) {
            boolean isUnique = true;
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == arr[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                uniqueElementIndex = i + 1; // Adjust index to be 1-based
                break;
            }
        }

        return uniqueElementIndex;
    }
}
/*
Input
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10

Output
2
1
5
3

 */