#include<stdio.h>
int pageCount(int n, int p) {
     if(n==1) return 0;
     if(n==p) return 0;
     int pageTurnFronFront,pageTurnFromBack;
     int min;
     pageTurnFronFront=p/2;
     if(n%2==0)
     {
         if(p%2==0)
         pageTurnFromBack=(n-p)/2;
         else
         pageTurnFromBack=(n-p+1)/2;

     }
     else
     pageTurnFromBack=(n-p)/2;
     (pageTurnFromBack>pageTurnFronFront)?(min=pageTurnFronFront):(min=pageTurnFromBack);
     return min;

}
int main()
{
	int n,p;
	scanf("%d %d",&n,&p);
	printf("(%d)\n",pageCount(n,p) );


	return 0;
}