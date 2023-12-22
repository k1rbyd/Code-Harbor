import java.util.Scanner;

public class Q5 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the investment amount: ");
        double investmentAmount = scanner.nextDouble();

        System.out.print("Enter the annual interest rate (in percentage): ");
        double annualInterestRate = scanner.nextDouble();

        System.out.print("Enter the number of years: ");
        int years = scanner.nextInt();

        double futureValue = calculateFutureValue(investmentAmount, annualInterestRate, years);
        System.out.printf("The future investment value is %.2f%n", futureValue);

        scanner.close();
    }

    public static double calculateFutureValue(double investmentAmount, double annualInterestRate, int years) 
    {
        double monthlyInterestRate = annualInterestRate / 1200;
        double futureInvestmentValue = investmentAmount * Math.pow(1 + monthlyInterestRate, years * 12);
        return futureInvestmentValue;
    }
}
