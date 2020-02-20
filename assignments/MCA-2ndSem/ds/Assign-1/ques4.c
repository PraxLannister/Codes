// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-4-program to Calculate roots of quadratic eqn
#include<stdio.h>

//functio to return square root upto 3 dec places
double squareRoot(int n)
{
	int l = 0;
	int r = n;
	int  ans ;
	//This loop will give integer Square Root Of A Number
	while(l<=r)
	{
		int mid = (r+l)/2;
		if(mid * mid <= n)
		{
			ans = mid;
			l = mid +1;
		}
		else r = mid -1;
	}
	
	if(ans * ans == n){
		return ( double)ans;
	}
	//Find Square root till six place of precision
	double precision=0.1,sqrt=( double)ans;
	int i;
	
	for(i=0;i<6;i++)
	{
		while(sqrt*sqrt<n)
			sqrt = sqrt + precision;

		sqrt = sqrt - precision;
		precision = precision/10;
	}
	return sqrt;
}


//funtion to return absolute value
int abs(int n)
{
	if(n<0)
		return -n;
	else return n;
}

void printRoots(int p,int q,int r)
{
	if(p==0)
		printf("Not a quadratic equation\n");
	else {
		int disc = q*q-(4*p*r);
		double sqrtDisc = squareRoot(abs(disc));
		if(disc >= 0){
			double root1 = ((-q)+sqrtDisc)/(2*p);
			double root2 = ((-q)-sqrtDisc)/(2*p);
			printf("\nRoots are Real : ===============\n");
			printf("1st Root : %.3lf && \n2nd Root : %.3lf \n",root1,root2);
		}
		else
		{
			double x =(-q)/(2*p);
			double y = sqrtDisc/(2*p);
			printf("\nRoots are Complex : =============\n");
			printf("1st Root : %.3lf + i %.3lf &&  \n2nd Root : %.3lf - i %.3lf\n",x,y,x,y);
		}

	}
}
int main()
{

	int p,q,r;
	printf("\nEnter value of a b and c\n");
	scanf("%d%d%d",&p,&q,&r);
	printf("\n========== The Roots Are ==========\n");
	printRoots(p,q,r);
	printf("\n\n");
	return 0;
}