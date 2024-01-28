import java.util.Scanner;

public class lab_01_06_equi {
    public static void main() {
        Scanner scan = new Scanner(System.in);
        int limit;
        long sum = 0;
        System.out.println("Enter the Limit: ");
        limit = scan.nextInt();
        for (int i = 1; i <= limit; ++i) {
            sum += i;
        }
        System.out.println(sum);
        scan.close();
    }
}
