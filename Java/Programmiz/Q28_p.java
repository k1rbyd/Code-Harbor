
import java.util.Scanner;

public class Q28_p 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int low = scanner.nextInt(), high = scanner.nextInt();
    
        for(int number = low + 1; number < high; ++number) {
          int digits = 0;
          int result = 0;
          int originalNumber = number;
    
          // number of digits calculation
          while (originalNumber != 0) {
            originalNumber /= 10;
            ++digits;
          }
    
          originalNumber = number;
    
          while (originalNumber != 0) {
            int remainder = originalNumber % 10;
            result += Math.pow(remainder, digits);
            originalNumber /= 10;
          }
    
          if (result == number) {
            System.out.print(number + " ");
          }
        }
      }
}
