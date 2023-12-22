
import java.util.Scanner;

public class Q25_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                System.out.println("Not Prime");
                break;
            }
            if(i==n)
                System.out.println("Its Prime");

        }
    }    
}
