
import java.util.Scanner;

public class Q19_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n1 = scanner.nextInt(), n2 = scanner.nextInt(), lcm;

        lcm = (n1 > n2) ? n1 : n2;

        while(true) 
        {
            if( lcm % n1 == 0 && lcm % n2 == 0 ) 
            {
                System.out.printf("The LCM of %d and %d is %d.", n1, n2, lcm);
                break;
            }
        ++lcm;
        }
    }    
}
