
import java.util.Scanner;

public class Q6_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = a;
        a = b;
        b = c;
        System.out.println(a);
        System.out.println(b);
    }
}
