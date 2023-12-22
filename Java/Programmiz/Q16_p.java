
import java.util.Scanner;

public class Q16_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int table = scanner.nextInt();
        for(int i=1;i<=table;i++)
        {
            System.out.println(num + "*" + i + "=" + (num*i));
        }
    }
}
