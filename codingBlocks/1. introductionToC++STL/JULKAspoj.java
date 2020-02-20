import java.util.*;
import java.lang.*;
import java.math.BigInteger;
class JULKAspoj
{
	static void compute(BigInteger n, BigInteger k)
	{
		BigInteger x,y;
		x = n.subtract(k);
		x = x.divide(BigInteger.valueOf(2));
		y = x.add(k);
		System.out.println(x);
		System.out.println(y);
		
		
		
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int test=10;
		while((test--)>0)
		{
			BigInteger n,k;
			n = sc.nextBigInteger();
			k = sc.nextBigInteger();
			compute(n,k); 
		}
		
	}
}