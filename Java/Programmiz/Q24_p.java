
import java.util.Scanner;

public class Q24_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        String str = scanner.nextLine(), reverseStr = "";
    
        int strLength = str.length();

        for (int i = (strLength - 1); i >=0; --i) {
        reverseStr = reverseStr + str.charAt(i);
        }

        if (str.toLowerCase().equals(reverseStr.toLowerCase())) {
        System.out.println(str + " is a Palindrome String.");
        }
        else {
        System.out.println(str + " is not a Palindrome String.");
        }
    }    
}
