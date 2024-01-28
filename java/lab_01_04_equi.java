import java.util.Scanner;

public class lab_01_04_equi {
    public static void main(String[] args) {
        int firstNum, secondNum, thirdNum, temp;
        System.out.print("Enter First Number: ");
        Scanner scan = new Scanner(System.in);
        firstNum = scan.nextInt();
        System.out.print("Enter Second Number: ");
        secondNum = scan.nextInt();
        System.out.print("Enter Third Number: ");
        thirdNum = scan.nextInt();
        temp = firstNum;
        if (secondNum < firstNum) {
            temp = secondNum;
        }
        if (thirdNum < firstNum) {
            temp = thirdNum;
        }
        scan.close();
        System.out.print("The lowest Number is: ");
        System.out.print(temp);

    }
}
