import java.util.Scanner;

public class lab_01_05_equi {
    public static void main() {
        Scanner scan = new Scanner(System.in);
        String str;
        System.out.println("Enter a string: ");
        str = scan.nextLine();
        String[] words = str.split("\\s+");
        for (int i = 0; i < str.length(); i++) {
            System.out.println(words[i]);
        }
        scan.close();
    }

}
