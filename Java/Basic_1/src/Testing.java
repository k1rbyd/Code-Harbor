
public class Testing
{
	public void convertHoursToMinutes(int n)
	{
		System.out.println("Minutes:"+(n*60));
	}
	public void convertMinutesToHours(int n)
	{
		System.out.println("Hours:"+(n/60));
	}
	public void check(int n)
	{
		if(n>50)
			System.out.println("You have passed.");
		else
			System.out.println("You have failed.");
	}
	public void tcheck(int a,int x, int y, int z)
	{
		if(a==1)
		{
			if(x+y+z==180)
			{
				System.out.println("Its a triangle.");
			}
			else
			{
				System.out.println("Its not a triangle.");
			}
		}
		if(a==2)
		{
			if(x+y>z && y+z>x && z+x>y)
				System.out.println("Its a triangle.");
			else
				System.out.println("Its not a triangle.");
		}
		if(a==3)
		{
			if((x*x)+(y*y)==(z*z)||(y*y)+(z*z)==(x*x)||(z*z)+(x*x)==(y*y))
				System.out.println("Its a right angled triangle.");
			else
				System.out.println("Its not a triangle.");				
		}
	}
	public void get_squares(int n)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum = sum + (i*i);
		}
		System.out.println("Sum:"+sum);
	}
}