/*	Author : Prakhar Shekhar Parthasarthi
	Date Created = Nov 26 , 2019

	===========================Theory===========================
	GCD(A,B) = GCD(B,A%B)--------(1)
	according to Bezouts's Identity
	GCD(A,B) = A.x + B.y --------(2)
	where x and y are integers
	GCD(A,B) = A.x + B.y 
	and
	GCD(B,A%B) = B.x1 + (A%B).y1 --------(3)
	from (1) 
	(2)=(3)
	B.x1 + (A%B).y1 = A.x + B+y   ------- (4)

	and Since We Know
	Dividend = Divisor * Quotient {florr(A/B)} + Remainder {A%B}  --------(i)
	Therefore A=B*{A/B} + A%B --------------------------------------------(ii)
	Therefore from (ii) A-[B*(A/B)] = A%B --------------------------------(iii)
	A - B.(A/B) = A%B ------------------------------------------------------(iii)
	putting (iii) in (4)
	we get
	B.x1 + (A - B.(A/B)).y1 ---------------(5)
	further simplifying
	= B.x1 + A.y1 -B.(A/B).y1
	= B(x1 - (A/B)y1) + A.y1 ---------------(6)

	on comparing  (6) and (2)
	A.x + B.y = A.y1 + B.(x1 -[A/B].y1)

	therefore
	____________________
	| 					|
	| x = y1			|
	| y = x1 - [A/B].y1 |
	|___________________|

	======================================================
	*/

#include<stdio.h>

int d,x,y;

void extendedEuclidean(int A,int B )
{
	if(B==0)
	{
		d=A;
		printf("(%d)\n",d );
		x=1;
		y=0;
	} 
	else 
	{
		extendedEuclidean(B,A%B);
		int temp = x;
		x=y;
		y=temp-(((A/B))*y);

	}

}

int main()
{
	int a,b;
	while(1)
	{
		scanf("%d %d",&a,&b);
		extendedEuclidean(a,b);
		printf("GCD(a,b) = %d = %d . (%d) + %d . (%d) \n",d,a,x,b,y );
	}
	return 0;
}