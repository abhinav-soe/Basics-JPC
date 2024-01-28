
// Printing first 10 natural numbers
import java.util.Scanner;

public class loop {
    public static void main(String[] args) {
        int i = 0;
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to print:");
        int n = scn.nextInt();
        for (i = 0; i < n; i++) {
            System.out.println(i + 1);
        }
        scn.close();
    }
}
