
import java.util.Scanner;

public class Q26_p 
{
    public static void main(String[] args) 
    {

        Scanner scanner = new Scanner(System.in);
        int low = scanner.nextInt(), high = scanner.nextInt();

        while (low < high) {
            boolean flag = false;

            for(int i = 2; i <= low/2; ++i) {
                if(low % i == 0) {
                    flag = true;
                    break;
                }
            }

            if (!flag && low != 0 && low != 1)
                System.out.print(low + " ");

            ++low;
        }  
    }
}