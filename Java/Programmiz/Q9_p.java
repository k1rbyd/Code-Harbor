
import java.util.Scanner;

public class Q9_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if(a>b && a>c)
            System.out.println(a + " is the greatest");
        else if(b>a && b>c)
            System.out.println(b + " is the greatest");
        else if(c>a && c>b)
            System.out.println(c + " is the greatest");

    }    
}
