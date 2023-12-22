
public class studentrunner 
{
	public static void main(String[] args)
	{
		String name = "Kaushik";
		int [] marks = {1,3,5,4,2};
		student A = new student(name,marks);
		System.out.println(A.getNumberOfMarks());
		System.out.println(A.getMin());
		System.out.println(A.getMax());
		System.out.println(A.getAvg());
		System.out.println(A.getTotalSumOfMarks());
	}
}
