#include<stdio.h>
void main() {
	int arr[5]={5,10,15,20,25};
	int i;
	for (i=0;i<5;i++) {
		printf("\nvalue of arr[%d] = %d\t",i,arr[i]);
		printf("address of arr[%d] = %p \n",i,&arr[i]);
	}
}
