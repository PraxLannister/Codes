#include <stdio.h>

int main(void) {
	// your code here
	while(1)
	{
		int a,b,c;
		// Braking condition
		scanf("%d %d %d",&a,&b,&c);
		if(a==0 && b==0 && c==0) break;
		// Findin if AP
		if((b*2)==(a+c))
		{
			int next=c+(b-a);
			printf("AP %d\n",next);
		}
		//Finding GP
		if((b*b)==a*c)
		{
			int next=c*(b/a);
			printf("GP %d\n",next);
		}
	}

	return 0;
}