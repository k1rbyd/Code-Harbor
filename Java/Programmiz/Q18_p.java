
import java.util.Scanner;

public class Q18_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int n1 = scanner.nextInt(), n2 = scanner.nextInt();
    
        int gcd = 1;

        for (int i = 1; i <= n1 && i <= n2; ++i) 
        {
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }

        System.out.println("GCD of " + n1 +" and " + n2 + " is " + gcd);
        
    }
}
