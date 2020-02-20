#include<stdio.h>
void main() {
	int *p;
	int (*ptr)[5]; /*can point to an array of five integers*/
	int arr[5];
	p=arr;
	ptr=&arr;
	printf("\np=%p , ptr=%p ",p,ptr);
	p++;
	ptr++;
	printf("\np=%p.....ptr=%p.......",p,ptr);
	
}
