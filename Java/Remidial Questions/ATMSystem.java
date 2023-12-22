import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ATMSystem {
    private static Map<String, Account> accounts = new HashMap<>();
    private static Account loggedInUser = null;

    public static void main(String[] args) {
        accounts.put("1234567890", new Account("John Doe", "1234567890", "1234", 10000.0));
        accounts.put("9876543210", new Account("Jane Smith", "9876543210", "4321", 5000.0));

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("ATM Simulation System");
            System.out.println("1. Admin Mode");
            System.out.println("2. User Mode");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); 

            switch (choice) {
                case 1:
                    adminMode(scanner);
                    break;

                case 2:
                    userMode(scanner);
                    break;

                case 3:
                    System.out.println("Thank you for using the ATM. Goodbye!");
                    System.exit(0);

                default:
                    System.out.println("Invalid choice. Please select a valid option.");
            }
        }
    }

    private static void adminMode(Scanner scanner) {
        System.out.print("Enter Admin PIN: ");
        String adminPin = scanner.nextLine();

        if (adminPin.equals("admin123")) {
            while (true) {
                System.out.println("Admin Mode");
                System.out.println("1. Add Account");
                System.out.println("2. Delete Account");
                System.out.println("3. Update Account Details");
                System.out.println("4. Exit Admin Mode");
                System.out.print("Enter your choice: ");
                int adminChoice = scanner.nextInt();
                scanner.nextLine();

                switch (adminChoice) {
                    case 1:
                        addAccount(scanner);
                        break;

                    case 2:
                        deleteAccount(scanner);
                        break;

                    case 3:
                        updateAccountDetails(scanner);
                        break;

                    case 4:
                        System.out.println("Exiting Admin Mode.");
                        return;

                    default:
                        System.out.println("Invalid choice. Please select a valid option.");
                }
            }
        } else {
            System.out.println("Invalid admin PIN. Access denied.");
        }
    }

    private static void addAccount(Scanner scanner) {
        System.out.print("Enter user's name: ");
        String name = scanner.nextLine();
        System.out.print("Enter card number: ");
        String cardNumber = scanner.nextLine();
        System.out.print("Enter PIN: ");
        String pin = scanner.nextLine();
        System.out.print("Enter initial balance: ");
        double balance = scanner.nextDouble();

        if (!accounts.containsKey(cardNumber)) {
            accounts.put(cardNumber, new Account(name, cardNumber, pin, balance));
            System.out.println("Account added successfully.");
        } else {
            System.out.println("Account with this card number already exists.");
        }
    }

    private static void deleteAccount(Scanner scanner) {
        System.out.print("Enter card number of the account to delete: ");
        String cardNumber = scanner.nextLine();

        if (accounts.containsKey(cardNumber)) {
            accounts.remove(cardNumber);
            System.out.println("Account deleted successfully.");
        } else {
            System.out.println("Account not found.");
        }
    }

    private static void updateAccountDetails(Scanner scanner) {
        System.out.print("Enter card number of the account to update: ");
        String cardNumber = scanner.nextLine();

        if (accounts.containsKey(cardNumber)) {
            Account account = accounts.get(cardNumber);
            System.out.print("Enter new name: ");
            account.displayAccountInfo();
            String name = scanner.nextLine();
            account.deposit(100);
        } else {
            System.out.println("Account not found.");
        }
    }

    private static void userMode(Scanner scanner) {
        System.out.print("Enter your card number: ");
        String cardNumber = scanner.nextLine();
        System.out.print("Enter your PIN: ");
        String pin = scanner.nextLine();

        if (accounts.containsKey(cardNumber)) {
            Account account = accounts.get(cardNumber);
            if (pin.equals(account.getPin())) {
                loggedInUser = account;

                while (true) {
                    System.out.println("User Mode");
                    System.out.println("1. Deposit");
                    System.out.println("2. Withdraw");
                    System.out.println("3. Check Balance");
                    System.out.println("4. Update Account Details");
                    System.out.println("5. Exit User Mode");
                    System.out.print("Enter your choice: ");
                    int userChoice = scanner.nextInt();
                    scanner.nextLine(); // Consume the newline

                    switch (userChoice) {
                        case 1:
                            deposit(scanner);
                            break;

                        case 2:
                            withdraw(scanner);
                            break;

                        case 3:
                            account.displayAccountInfo();
                            break;

                        case 4:
                            updateAccountDetails(scanner);
                            break;

                        case 5:
                            loggedInUser = null;
                            System.out.println("Exiting User Mode.");
                            return;

                        default:
                            System.out.println("Invalid choice. Please select a valid option.");
                    }
                }
            } else {
                System.out.println("Invalid PIN. Access denied.");
            }
        } else {
            System.out.println("Account not found.");
        }
    }

    private static void deposit(Scanner scanner) {
        System.out.print("Enter the amount to deposit: ");
        double amount = scanner.nextDouble();
        loggedInUser.deposit(amount);
        System.out.println("Deposit successful. Current balance: Rs " + loggedInUser.getBalance());
    }

    private static void withdraw(Scanner scanner) {
        System.out.print("Enter the amount to withdraw: ");
        double amount = scanner.nextDouble();
        loggedInUser.withdraw(amount);
        System.out.println("Withdrawal successful. Current balance: Rs " + loggedInUser.getBalance());
    }
}
