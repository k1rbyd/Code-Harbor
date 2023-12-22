
import java.util.Scanner;

public class Q3 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int t1,t2,M;
        t1 = scanner.nextInt();
        t2 = scanner.nextInt();
        M = scanner.nextInt();
        System.out.println(M * (t2 - t1) * 4184 );
    }    
}
