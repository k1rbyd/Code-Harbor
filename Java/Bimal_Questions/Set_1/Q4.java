import java.util.Scanner;

public class Q4 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the outside temperature (in degrees Fahrenheit): ");
        double ta = scanner.nextDouble();

        System.out.print("Enter the wind speed (in miles per hour): ");
        double v = scanner.nextDouble();

        double windChill = calculateWindChill(ta, v);
        if (!Double.isNaN(windChill)) 
        {
            System.out.printf("The wind-chill temperature is %.2f degrees Fahrenheit%n", windChill);
        }

        scanner.close();
    }

    public static double calculateWindChill(double ta, double v) 
    {
        if (ta < -58 || ta > 41 || v < 2) 
        {
            System.out.println("The input values are not within the valid range.");
            return Double.NaN;
        }

        double twc = 35.74 + 0.6215 * ta - 35.75 * Math.pow(v, 0.16) + 0.4275 * ta * Math.pow(v, 0.16);
        return twc;
    }
}
