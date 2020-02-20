#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	int l;
	for(l=0;l<t;l++)
	{
		int a[200]={1};
		int num,n=0;
		scanf("%d",&num);
		int i,j;
		for(i=1;i<=num;i++)
		{
			int carry=0;
			for(j=0;j<200;j++)
			{
				int temp=a[j]*i+carry;
				a[j]=temp%10;
				carry=temp/10;
			}
		}
		n=200;
		int flag=0;
		for(i=n-1;i>=0;i--)
		{
		while(a[i]==0 && flag==0) 
		{
			i--;
			if(a[i-1]!=0) 
			{
				flag++;
				i--;
			}
		}
		printf("%d",a[i]);
		}
		printf("\n");
	}
}
