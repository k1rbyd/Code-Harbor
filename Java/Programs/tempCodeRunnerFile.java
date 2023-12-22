import java.util.Scanner;

public class factor 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int temp = n;
        int digit;
        boolean isFactor = false;
        while (temp > 0) 
        {
            digit = temp % 10;
            isFactor = n % digit == 0;
            if (isFactor) 
            {
                System.out.print(digit+" ");
            }
            temp /= 10;
        }
        if (isFactor==false) 
        {
            System.out.println("No factors bixxxtth");
        }
    }
}
