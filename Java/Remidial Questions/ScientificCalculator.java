import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class ScientificCalculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double num1 = 0.0, num2 = 0.0, result = 0.0;
        String operator;
        List<String> history = new ArrayList<>();

        System.out.println("Simple Scientific Calculator");
        System.out.println("Available operations:");
        System.out.println("+ : Addition");
        System.out.println("- : Subtraction");
        System.out.println("* : Multiplication");
        System.out.println("/ : Division");
        System.out.println("sqrt : Square Root");
        System.out.println("pow : Exponentiation");
        System.out.println("log : Logarithm");
        System.out.println("Enter 'q' to quit.");

        while (true) {
            System.out.print("Enter an operation: ");
            operator = input.next();

            if (operator.equals("q")) {
                System.out.println("Calculator quitting. Goodbye!");
                break;
            }

            if (!operator.equals("sqrt") && !operator.equals("pow") && !operator.equals("log")) {
                System.out.print("Enter the first number: ");
                num1 = input.nextDouble();
                System.out.print("Enter the second number: ");
                num2 = input.nextDouble();
            } else if (operator.equals("log")) {
                System.out.print("Enter the base: ");
                double base = input.nextDouble();
                System.out.print("Enter the number: ");
                num1 = input.nextDouble();
                result = Math.log(num1) / Math.log(base);
                history.add("log_" + base + "(" + num1 + ") = " + result);
                System.out.println("Result: " + result);
                continue;
            } else {
                System.out.print("Enter the number: ");
                num1 = input.nextDouble();
            }

            String operation = num1 + " " + operator;
            if (!operator.equals("sqrt") && !operator.equals("pow")) {
                operation += " " + num2;
            }

            switch (operator) {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":
                    if (num2 == 0) {
                        System.out.println("Division by zero is not allowed.");
                        continue;
                    }
                    result = num1 / num2;
                    break;
                case "sqrt":
                    result = Math.sqrt(num1);
                    break;
                case "pow":
                    System.out.print("Enter the exponent: ");
                    double exponent = input.nextDouble();
                    result = Math.pow(num1, exponent);
                    operation += " " + exponent;
                    break;
                default:
                    System.out.println("Invalid operator. Please try again.");
                    continue;
            }

            history.add(operation + " = " + result);
            System.out.println("Result: " + result);
        }

        // Print the history of operations
        System.out.println("History of Operations:");
        for (String entry : history) {
            System.out.println(entry);
        }

        input.close();
    }
}
