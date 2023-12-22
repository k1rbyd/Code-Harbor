
public class runner 
{
	public static void main(String[] args)
	{
		Derived D = new Derived();
		D.get_Class("Class 1-A");
		D.get_college("VIT");
		D.get_employer("Dhana");
		D.get_grade('S');
		D.get_salary(100000);
		D.get_title("HOD");
		System.out.println(D);
	}
}
