import java.util.*;
import java.lang.*;
import java.math.BigInteger;

class factorialBigInteger
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while((test--)!=0)
		{
			int num = sc.nextInt();
			BigInteger fact = new BigInteger("1");
			for(int i=2;i<=num;i++)
				fact = fact.multiply(BigInteger.valueOf(i));
			System.out.println(fact+"\n");
		}
	}
	
}