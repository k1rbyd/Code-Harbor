import java.util.Scanner;

public class factor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Integer temp = Integer.valueOf(n);
        Integer digit;
        boolean isFactor = false;
        
        while (temp > 0) {
            digit = Integer.valueOf(temp % 10);
            if (n % digit == 0) {
                isFactor = true;
                System.out.print(digit + " ");
            }
            temp /= 10;
        }
        
        if (!isFactor) {
            System.out.println("No factors");
        }
    }
}
