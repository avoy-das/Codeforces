import java.util.Scanner;

public class Rahul {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int i;
        int count = 0;
        for (i = 0; i < t; i++) {
            String txt = sc.next();
            if (txt.startsWith("T")) {
                count += 4;
            } else if (txt.startsWith("C")) {
                count += 6;
            } else if (txt.startsWith("O")) {
                count += 8;
            } else if (txt.startsWith("D")) {
                count += 12;
            } else if (txt.startsWith("I")) {
                count += 20;
            }
        }
        System.out.println(count);
    }
}
