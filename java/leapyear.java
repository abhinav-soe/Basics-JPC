import java.util.Scanner;

public class leapyear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter year: ");
        int year = sc.nextInt();
        boolean ans = isLeapYear(year);
        sc.close();
        if (ans == true) {
            System.out.println(year + " is a Leap Year");
        } else {
            System.out.println(year + " is not a Leap Year");
        }
    }

    public static boolean isLeapYear(int year) {
        if (year % 100 == 0) {
            return false;
        } else {
            if (year % 4 == 0) {
                return true;
            } else {
                return false;
            }
        }

    }
}
