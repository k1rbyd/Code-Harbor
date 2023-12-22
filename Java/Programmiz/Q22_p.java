
import java.util.Scanner;

public class Q22_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x=0;
        int temp;
        while(n>9)
        {
            temp = n%10;
            x += temp;
            x *= 10;
            n = n/10;
        }
        
        x += n;
        System.out.println(x);

    }
}
