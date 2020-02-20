// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(5)
//Problem Statement =======================================================================
/*5. Perform the following operations on 2-D Array.
I. Addidion
II. Substraction
III. Multiplication
IV. Transpose of a Given Matrix*/

#include<stdio.h>

void add(int a[][10],int ,int ,int b[][10],int ,int );
void sub(int a[][10],int ,int ,int b[][10],int ,int );
void multiply(int a[][10],int ,int ,int b[][10],int ,int );
void transpose(int a[][10],int ,int );
int main()
{
  int i,j,a[10][10],b[10][10];
  int r1,c1,r2,c2;
  printf("Enter rows and columns of first matrix: ");
  scanf("%d%d",&r1,&c1);
  
  printf("Enter elements of first matrix: \n");
  for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);
  
  printf("Enter rows and columns of second matrix: ");
  scanf("%d%d",&r2,&c2);
  
  printf("Enter elements of second matrix: \n");
  for(i=0;i<r2;i++)
  for(j=0;j<c2;j++)
  scanf("%d",&b[i][j]);
  
  add(a,r1,c1,b,r2,c2);
  multiply(a,r1,c1,b,r2,c2);
  sub(a,r1,c1,b,r2,c2);
  transpose(a,r1,c1);
  transpose(b,r2,c2);
  
}

void add(int a[][10],int r1,int c1,int b[][10],int r2,int c2)
{
	int i,j;
	if(r1==r2&&c1==c2){
		printf("Addition is: \n");
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	printf("%2d  ",a[i][j]+b[i][j]);
	    	printf("\n");
		}
		
	}
	else
	  printf("Addition not possible.\n");
}

void sub(int a[][10],int r1,int c1,int b[][10],int r2,int c2)
{
	int i,j;
	if(r1==r2&&c1==c2){
		printf("Subtraction is: \n");
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	printf("%2d  ",a[i][j]-b[i][j]);
	    	printf("\n");
		}
		
	}
	else
	  printf("Subtraction not possible.\n");
}

void transpose(int a[][10],int r1,int c1)
{
	int i,j;
	
		printf("Transpose is: \n");
	    for(i=0;i<c1;i++)
	    {
	    	for(j=0;j<r1;j++)
	    	printf("%2d  ",a[j][i]);
	    	printf("\n");
		}
		
	
	
}

void multiply(int a[][10],int r1,int c1,int b[][10],int r2,int c2)
{
	int i,j,k,sum=0;
	if(c1==r2){
		int c[r1][c2];
		
		for(i=0;i<r1;i++)
		{
         for (j=0;j<c2;j++)
		  {
            for(k=0;k<c1;k++) {
             sum+=a[i][k]*b[k][j];
             }
            c[i][j]=sum;
            sum=0;
         }
       }
		
		
		printf("Multiplication is: \n");
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	printf("%2d  ",c[i][j]);
	    	printf("\n");
		}
	}
	else
	  printf("Multiplication not possible.\n");
}
