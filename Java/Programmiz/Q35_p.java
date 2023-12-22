
import java.util.Scanner;

public class Q35_p 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        long factorial = multiplyNumbers(num);
        System.out.println("Factorial of " + num + " = " + factorial);
    }
    public static long multiplyNumbers(int num)
    {
        if (num >= 1)
            return num * multiplyNumbers(num - 1);
        else
            return 1;
    }
}
