import java.util.Scanner;

public class Q34_p 
{
    static int[] sums;

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        sums = new int[x + 1];
        sums[0] = 0;
        sums[1] = 0;
        for (int i = 2; i <= x; i++) {
            sums[i] = sums[i - 1] + i;
        }
        int result = sums[x];
        System.out.println(result);
    }    
}
