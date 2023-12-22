import java.util.Arrays;

public class student 
{
	String name;
	int[] marks = new int[5];
	
	student(String name, int[] marks)
	{
		this.marks = marks;
		this.name = name;
	}
	
	public int getNumberOfMarks()
	{
		return 5;
	}
	
	public int getTotalSumOfMarks()
	{
		int total=0;
		for(int mark:marks)
			total+=mark;
		return total;
	}
	
	public int getMax()
	{
		Arrays.sort(marks);
		return marks[4];
	}
	
	public int getMin()
	{
		Arrays.sort(marks);
		return marks[0];
	}
	
	public int getAvg()
	{
		Arrays.sort(marks);
		return ((marks[0]+marks[4])/2);
	}
}
