#include <stdio.h>

int main(void) {
	// your code here]
	int t,x,y,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		if(x==y)
		{
			if(x%2==0)
			{
				x=x*2;
				y=y*2;
				printf("%d\n",x);
			}
			else 
			{
				x=2*x-1;
				printf("%d\n",x);
			}
		}
		else if( y==(x-2))
		{
			if(x%2==0)
			{
				printf("%d\n",(x+y));
			}
			else 
			{
				printf("%d\n",((x+y-1)));
			}
		}
		else 
		printf("No Number\n");
	}
	return 0;
}