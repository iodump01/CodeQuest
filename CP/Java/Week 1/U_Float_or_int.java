// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
import java.util.Scanner;
public class U_Float_or_int {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float n = scanner.nextFloat(); // Read the number

        int integerPart = (int) n;
        float decimalPart = n - integerPart;

        if (decimalPart == 0) {
            System.out.println("int " + integerPart);
        } else {
            System.out.println("float " + integerPart + " " + decimalPart);
        }
    }
}

/*   input
     234.000
     output
     int 234

     input
     534.958
     output
     float 534 0.958
 */