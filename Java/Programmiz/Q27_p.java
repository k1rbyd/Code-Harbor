
import java.util.Scanner;

public class Q27_p 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int number = scanner.nextInt(), originalNumber, remainder, result = 0;

        originalNumber = number;

        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, 3);
            originalNumber /= 10;
        }

        if(result == number)
            System.out.println(number + " is an Armstrong number.");
        else
            System.out.println(number + " is not an Armstrong number.");
    }
}
