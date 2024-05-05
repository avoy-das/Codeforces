import java.util.Scanner;

public class Avoy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String txt = sc.next();

        int h=txt.indexOf('h');
        int e=txt.indexOf('e',h+1);
        int l=txt.indexOf('l',e+1);
        int l2=txt.indexOf('l',l+1);
        int o=txt.indexOf('o',l2+1);


        if (h<e && e<l && l<l2 && l2<o)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }



    }
}
