
import java.util.Scanner;

public class Answer 
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		int i;
		i = scanner.nextInt();
		boolean ans;
		ans = (i%2==0? true:false);
		System.out.println(ans);
        scanner.close();
	}
}

