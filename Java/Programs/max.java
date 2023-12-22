import java.util.Scanner;

public class max 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        Integer num1 = scanner.nextInt();
        Integer num2 = scanner.nextInt();
        Integer num3 = scanner.nextInt();
        Integer max = Math.max(Math.max(num1, num2), num3);
        System.out.println("The maximum of the three numbers is: " + max);
    }
}
