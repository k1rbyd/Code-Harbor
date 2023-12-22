public class Manager extends Employee {
    String dept;

    public Manager(String name, String dept, int salary) {
        super(name, salary);
        this.dept = dept;
    }

    public void getDept() {
        System.out.println(dept);
    }
}

