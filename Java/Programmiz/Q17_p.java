
import java.util.Scanner;

public class Q17_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(), firstTerm = 0, secondTerm = 1;
        
        for (int i = 1; i <= n; ++i) 
        {
            System.out.print(firstTerm + ", ");
            int nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
}
