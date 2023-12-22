
import java.util.Scanner;

public class Q15_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int fact=1;
        for(int i=1;i<=num;i++)
        {
            fact *= i;
        }
        System.out.println("Factorial: "+fact);
    }    
}
