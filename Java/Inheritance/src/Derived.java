
public class Derived extends Base
{
	public String title;
	public String employer;
	public char employee_grade;
	public int salary;

	public void get_title(String title)
	{
		this.title=title;
	}

	public void get_employer(String employer)
	{
		this.employer=employer;
	}
	
	public void get_grade(char grade)
	{
		this.employee_grade=grade;
	}
	
	public void get_salary(int salary)
	{
		this.salary = salary;
	}
	
	public String toString()
	{
		return (college+"#"+Class+"#"+title+"#"+employer+"#"+employee_grade+"#"+salary);
	}
}
