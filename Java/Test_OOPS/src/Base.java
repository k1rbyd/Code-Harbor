import java.math.BigDecimal;

public class Base
{
	private BigDecimal p;
	private BigDecimal r;

	public Base(String d,String d1)
	{
		this.p = new BigDecimal(d);
		this.r = new BigDecimal(d1);
	}
	
	public void calculateInterest(String t)
	{
		BigDecimal time = new BigDecimal(t);
		BigDecimal Result = p.add(p.multiply(time).multiply(r));
		System.out.println(Result);
	}
	public void print()
	{
		for(int i=65;i<=90;i++)
		{
			System.out.println((char)i);
		}
	}
}