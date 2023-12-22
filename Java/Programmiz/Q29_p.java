
import java.util.Scanner;

public class Q29_p 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int low = scanner.nextInt(), high = scanner.nextInt();

        while (low < high) 
        {
            if(checkPrimeNumber(low))
                System.out.print(low + " ");

            ++low;
        }
    }

    public static boolean checkPrimeNumber(int num) 
    {
        boolean flag = true;

        for(int i = 2; i <= num/2; ++i) 
        {
            if(num % i == 0) 
            {
                flag = false;
                break;
            }
        }

        return flag;
    }
}
