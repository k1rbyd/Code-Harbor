
import java.util.Scanner;

public class Q13_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        char c = scanner.nextLine().charAt(0);

        if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            System.out.println(c + " is an alphabet.");
        else
            System.out.println(c + " is not an alphabet.");
    }
}
