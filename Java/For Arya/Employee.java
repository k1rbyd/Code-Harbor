public class Employee 
{
    String name;
    int salary;

    public Employee(String name, int salary) {
        this.name = name;
        this.salary = salary;
    }

    public void getName() {
        System.out.println(name);
    }

    public void getSalary() {
        System.out.println(salary);
    }
}