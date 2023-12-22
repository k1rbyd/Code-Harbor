
import java.util.Scanner;

public class Q5_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int i = scanner.nextInt();
        int j = scanner.nextInt();
        System.out.println("Quotient:" + i/j);
        System.out.println("Remainder:"+ i%j);
    }    
}
