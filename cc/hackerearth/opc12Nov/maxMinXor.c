
// Author Prakhar Shekhar Parthasarthi
// Date Created : 12th Nov 2019
// Problem : You have to find 2 numbers B and C such that A xor B is minimum and A xor C is maximum.
#include<stdlib.h>
#include<stdio.h>
// func decimal to binary
// return number array in reverse order
int *decimalToBinary(int num)
{
	int arr[100]={0};
	if(num==0)
	{
		int *temp=(int *)malloc((sizeof(int)*1));
		temp[0]=0;
		return temp;
	}
	else
	{
		int i,size=0;
		while(num)
		{
			int digit=num%2;
			//printf("%d!!!!\n",digit	 );
			arr[size++]=digit;
			num/=2;
		}
		/*for(i=0;i<size;i++)
		{
			printf("%d---\n",arr[i] );
		}*/
		int *temp=(int *)malloc((size+1)*sizeof(int));
		for(i=0;i<size;i++)
		{
			temp[i]=arr[i];
		}
		

		temp[size]=-1;
		/*for(i=0;i<size+1;i++)
		{
			printf("%d**	**\n",temp[i] );
		}*/
		return temp;
	}
}
int binaryToDecimal(int *binary)
{
	int i=0;
	int num=0;
	int mul=1;
	int dec=0;
/*	while(binary[i]!=-1)*/
	while(binary[i]!=(-1))
	{
		if(binary[i]==0)
			binary[i]=1;
		else binary[i]=0;
		num=binary[i];
		num=num*mul;
		dec=dec+num;
		mul=mul*2;
		i++;
		printf("%d** %d** ** *\n",dec,num);

	}
	return dec;
		



}


int main()
{
	int num;
	scanf("%d",&num);
	printf("%d.....",binaryToDecimal(decimalToBinary(num))) ;

	
	

	return 0;

}
