public class TimeDepositAccount
{
    int interestRate;
    int balance;
    public TimeDepositAccount(int interestRate, int balance)
    {
        this.interestRate = interestRate;
        this.balance = balance;
    }

    public void getBalance()
    {
        System.out.println("Current Balance:"+ balance);
    }

    public void addInterest(int months)
    {
        int temp;
        temp = (balance/interestRate) * months;
        this.balance += temp;
    }

    public void withdraw()
    {
        System.out.println("Balence being withdrawn : " + balance);
        this.balance = 0;
    }

    public static void main(String[] args)
    {
        TimeDepositAccount t1 = new TimeDepositAccount(10, 10);
        t1.getBalance();
        t1.addInterest(5);
        t1.getBalance();
        t1.withdraw();
    }
}