import java.util.Scanner;

public class Q33_p 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int[] primes = sieveOfEratosthenes(x);

        for (int i = 0; i < primes.length; i++) {
            for (int j = i + 1; j < primes.length; j++) {
                if (primes[i] + primes[j] == x) {
                    System.out.println(primes[i] + " and " + primes[j]);
                }
            }
        }
    }

    static int[] sieveOfEratosthenes(int n) {
        boolean[] isPrime = new boolean[n + 1];
        for (int i = 2; i <= n; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int[] primes = new int[n];
        int index = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                primes[index++] = i;
            }
        }

        return primes;
    }
}
