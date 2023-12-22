import java.util.*;
import java.io.*;

public class GuessingGame
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        System.out.println("How many attempts do you want:");
        int attempts = scanner.nextInt();

        int min = 1;
        int max = 1000;
        int randomNumber = random.nextInt(max - min + 1) + min;
        
        while (attempts > 0) 
        {
            System.out.println("Enter your guess (" + attempts + " attempts remaining): ");
            int guess = scanner.nextInt();

            if (guess == randomNumber) 
            {
                System.out.println("Correct! You win!");
                break;
            }

            else if (guess > randomNumber) 
            {
                System.out.println("Too high!");
            }
            else 
            {
                System.out.println("Too low!");
            }

            attempts--;
        }

        if (attempts == 0) 
        {
            System.out.println("You have run out of attempts. The correct number was: " + randomNumber);
        }
    }
}
