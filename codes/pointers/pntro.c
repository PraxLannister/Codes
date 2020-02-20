#include<stdio.h>
void main()
{	
	void func(int *);
	int a[10];
	printf("\n......\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n.......\n");
	func(a);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}

void func(int *b)
{
	printf("\n b %u \n",b);
	printf("\n b+1 %u\n",b+1);
	printf("\n b+2 %u\n",b+2);
	printf("\n int %u\n",sizeof(int));
	printf("\n float %u\n",sizeof(float));
	printf("\n b+1s %u\n",sizeof(b+1));
	printf("\n sb+2 %u\n",sizeof(b+2));
	printf("\n vb+1 %d\n",*(b+1));
	printf("\n vb+2 %u\n",*(b+2));
	printf("\n vb+3 %u\n",*(b+3));
	b++;
	printf("\n s after b++ %u\n",sizeof(b));
	printf("\n v after b++ %u\n",*(b));
	printf("\n b after b++ %u\n",b);
	

/* pahle core dumnped ki error  aa rhi thi coz hum loop 10 tak hi chla rhe the after b++
so ab loop 9 tak hi chalaya hai tabhi nhi aayegi and program working fine
note; size of int in this machine is 4*/
 
	for (int i=0;i<9;i++)
	{
		*(b+i)=333;
	}
}








