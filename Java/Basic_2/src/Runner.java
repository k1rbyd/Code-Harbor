
import java.util.Scanner;

public class Runner 
{
	public static void main(String[] args)
	{
		int n1;
		int n2;
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter number 1:");
		n1 = scanner.nextInt();
		System.out.println("Enter number 2:");
		n2 = scanner.nextInt();
		
		int choice;
		System.out.println("1 to Add\n2 to Subtract\n3 to Multiply\n4 to Divide");
		System.out.println("Your Choice:");
		
		choice = scanner.nextInt();
		
        switch(choice)
        {
            case 1:
                System.out.println("Sum:"+ (n1+n2));
                break;
            case 2:
                System.out.println("Difference:"+ (n1-n2));
                break;
            case 3:
                System.out.println("Product:"+ (n1*n2));
                break;
            case 4:
                System.out.println("Dividend:"+ (n1/n2));
                break;
            default:
                break;
        }
        
        scanner.close();
	
    }
}
