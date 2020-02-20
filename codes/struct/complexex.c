#include<stdio.h>
void main(){
	struct node{
		int i;
		int *c;
	};
	int x;
	struct node a[2],*p;
	int b[2]={30,40};
	p=&a[0];
	a[0].i=10;
	a[1].i=20;
	a[0].c=b;
// 	printf("\n %d \n",++p->i);
//	x=(++p)->i; printf ("\n %d \n",x);
//	x=(p++)->i; printf("\n %d \n",x);
//	x=*p->c; printf("\n %d \n",x);
//	x=*p->c++; printf("\n %d \n",x);
//      x=(*p->c); printf("\n %d \n",x);
	x=*p++->c; printf("\n %d \n",x);



}

