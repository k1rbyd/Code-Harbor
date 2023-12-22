public class Proctor 
{
    public static void main(String[] args) 
    {
        Person p = new Person("Kaushik", 18, 'M', 178);
        Student s = new Student("kirby", "22BCE0365", "Chennai");
        p.display();
        s.display();
        System.out.println("Displaying student with city:");
        s.display("Chennai");
        
    }
}
