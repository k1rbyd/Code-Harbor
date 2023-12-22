import java.util.Scanner;

public class Q21_p {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int count = 0; 
        
        if (num < 0) {
            num = -num; 
        }
        
        if (num == 0) {
            count = 1; 
        } else {
            while (num > 0) {
                count++;
                num = num / 10;
            }
        }
        
        System.out.println(count);
    }
}
