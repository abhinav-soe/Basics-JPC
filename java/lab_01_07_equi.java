
// Write a C++ program to find a difference of place values of n+1 th and n th digits in a number x (where x
// and n are defined by user and n is less than the number of digits in the x).
import java.util.Scanner;

public class lab_01_07_equi {
    public static double findDigit(double num, double pos) {
        if (pos < 0) {
            System.out.println("Invalid Input");
            return -1;
        }
        double divisor = Math.pow(10, pos - 1);
        double result = (num / divisor) % 10;
        return result;

    }

    public static double placeValueDifference(double nthDigit, double nth_1Digit, double digitPosition) {
        double nthDigitPlace = nthDigit * Math.pow(10, digitPosition);
        double nth_1DigitPlace = nth_1Digit * Math.pow(10, digitPosition);
        return Math.abs(nthDigitPlace - nth_1DigitPlace);
    }

    public static void main(String[] args) {
        double nthDigit, nth_1Digit;
        double originalNumber, digitPosition;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter an Integer: ");
        originalNumber = scn.nextInt();
        System.out.println("Enter the position: ");
        digitPosition = scn.nextInt();
        nthDigit = findDigit(originalNumber, digitPosition);
        nth_1Digit = findDigit(originalNumber, digitPosition + 1);
        double diff = placeValueDifference(nthDigit, nth_1Digit, digitPosition);
        System.out.printf("The Difference between Place Value of %e", diff);
        scn.close();
    }

}
