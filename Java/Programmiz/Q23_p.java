
import java.util.Scanner;

public class Q23_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int base = scanner.nextInt();
        int power = scanner.nextInt();
        int ans = 1;
        for(int i=0; i<power;i++)
        {
            ans *= base;
        }
        System.out.println(ans);
    }    
}
