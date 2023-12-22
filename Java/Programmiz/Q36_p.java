
import java.util.Scanner;

public class Q36_p 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int n1 = scanner.nextInt(), n2 = scanner.nextInt();
        int hcf = hcf(n1, n2);

        System.out.printf("G.C.D of %d and %d is %d.", n1, n2, hcf);
    }

    public static int hcf(int n1, int n2)
    {
        if (n2 != 0)
            return hcf(n2, n1 % n2);
        else
            return n1;
    }    
}
