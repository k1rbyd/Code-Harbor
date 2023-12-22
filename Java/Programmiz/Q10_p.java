import java.util.Scanner;

public class Q10_p 
{
  public static void main(String[] args) 
  {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter the coefficient a: ");
    double a = scanner.nextDouble();

    System.out.print("Enter the coefficient b: ");
    double b = scanner.nextDouble();

    System.out.print("Enter the coefficient c: ");
    double c = scanner.nextDouble();

    scanner.close();

    double root1, root2;
    double determinant = b * b - 4 * a * c;

    if (determinant > 0) 
    {
      root1 = (-b + Math.sqrt(determinant)) / (2 * a);
      root2 = (-b - Math.sqrt(determinant)) / (2 * a);
      System.out.format("root1 = %.2f and root2 = %.2f", root1, root2);
    } else if (determinant == 0) 
    {
      root1 = root2 = -b / (2 * a);
      System.out.format("root1 = root2 = %.2f;", root1);
    } else 
    {
      double real = -b / (2 * a);
      double imaginary = Math.sqrt(-determinant) / (2 * a);
      System.out.format("root1 = %.2f+%.2fi", real, imaginary);
      System.out.format("\nroot2 = %.2f-%.2fi", real, imaginary);
    }
  }
}
