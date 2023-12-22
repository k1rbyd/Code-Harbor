import java.util.Scanner;

public class Q6 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the distance to drive (in miles): ");
        double distance = scanner.nextDouble();

        System.out.print("Enter the fuel efficiency of the car (in miles per gallon): ");
        double mpg = scanner.nextDouble();

        System.out.print("Enter the price per gallon of fuel: ");
        double pricePerGallon = scanner.nextDouble();

        double tripCost = calculateTripCost(distance, mpg, pricePerGallon);
        System.out.printf("The cost of the trip is $%.2f%n", tripCost);

        scanner.close();
    }

    public static double calculateTripCost(double distance, double mpg, double pricePerGallon) 
    {
        double cost = (distance / mpg) * pricePerGallon;
        return cost;
    }
}
