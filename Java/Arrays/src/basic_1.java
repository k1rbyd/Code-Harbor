
import java.util.Scanner;

public class basic_1 
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);
		int[] list = new int[8];
		for(int i=0;i<list.length;i++)
		{
			list[i] = scanner.nextInt();
		}
		for(int i=0;i<list.length;i++)
		{
			if(i==list.length-1)
				System.out.printf("%d",list[i]);	
			else
			System.out.printf("%d, ",list[i]);
		}
		scanner.close();
	}
}
