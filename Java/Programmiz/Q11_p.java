
import java.util.Scanner;


public class Q11_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();
        boolean leap = false;
    
        if (year % 4 == 0) 
        {
            if (year % 100 == 0) 
            {
                if (year % 400 == 0)
                  leap = true;
                else
                  leap = false;
            }
            else
                leap = true;
            }
            else
              leap = false;
            
            if(leap)
            System.out.println("Its a Leap Year");
            else
            System.out.println("Its not a Leap Year");
            scanner.close();
            }    
}
        
