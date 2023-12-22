public class Student  
{
    private String name;
    private String rollNumber;
    private String address;

    public Student(String name, String rollNumber, String address) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.address = address;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Address: " + address);
    }

    public void display(String city) {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Address: " + address);
        System.out.println("City: " + city);
    }
}





