import java.util.Scanner;

public class Q8_p {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        char a = scanner.next().charAt(0);
        a = Character.toLowerCase(a);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            System.out.println("It's a vowel");
        } else {
            System.out.println("It's a consonant");
        }
    }
}
