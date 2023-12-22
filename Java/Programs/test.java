
import java.util.Scanner;  

class test
{  
    public static void main(String[] args) 
    { 
       String[] cars = new String[3];
        Scanner scanner = new Scanner(System.in);    
        for (int i = 0; i < cars.length; i++) 
        {
            cars[i] = scanner.next();
        } 
            
        for (int i = 0; i < cars.length; i++) 
        {
            System.out.println(cars[i]);
        }
        scanner.close();
        }
}
    


