import java.util.Scanner;

public class CGPACalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of courses: ");
        int numCourses = scanner.nextInt();

        double totalCredits = 0;
        double totalGradePoints = 0;

        for (int i = 1; i <= numCourses; i++) {
            System.out.println("Enter details for Course " + i + ":");

            System.out.print("Enter grade (S, A, B, C, D, E, F, N): ");
            String grade = scanner.next();

            System.out.print("Enter credit hours: ");
            double creditHours = scanner.nextDouble();

            double gradePoint = calculateGradePoint(grade);

            totalCredits += creditHours;
            totalGradePoints += gradePoint * creditHours;
        }

        double cgpa = totalGradePoints / totalCredits;

        System.out.println("Your CGPA is: " + cgpa);
    }

    public static double calculateGradePoint(String grade) {
        switch (grade) {
            case "S":
                return 10.0;
            case "A":
                return 9.0;
            case "B":
                return 8.0;
            case "C":
                return 7.0;
            case "D":
                return 6.0;
            case "E":
                return 5.0;
            case "F":
                return 0.0;
            case "N":
                return 0.0; 
            default:
                System.out.println("Invalid grade entered for a course.");
                return 0.0; 
        }
    }
}
