public class Person
{
    private String name;
    private int age;
    private char gender;
    private int height;

    public Person(String name, int age, char gender, int height) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.height = height;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("Height: " + height + " cm");
    }
}

