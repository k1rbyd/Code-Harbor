
import java.util.Scanner;

public class Q41_p
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int choice = scanner.nextInt();

        int ans = fact(choice);
        System.out.println(ans);
    }

    static int fact(int x)
    {
        if(x==1)
            return 1;
        else 
            return x * fact(x-1);
    }
}