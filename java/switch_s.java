import java.util.Scanner;

public class switch_s {
    public static void numCheck(int num) {
        switch (num) {
            case 1:
                System.out.println("One");
                break;

            default:
                System.out.print("Not one");
                break;
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int n = scn.nextInt();
        numCheck(n);
        scn.close();
    }

}
