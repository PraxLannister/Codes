// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-6-Write a C program that uses functions to perform the following:
//						a) Addition of Two Matrices
//						b) Multiplication of Two Matrices
 	

#include <stdio.h> 
#define N 100 
int row1,col1,row2,col2;
  
// This function multiplies mat1[][] and mat2[][], 
// and stores the result in res[][] 
void multiply(int mat1[][N], int mat2[][N], int res[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < row1; i++) 
    { 
        for (j = 0; j < col2; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < N; k++) 
                res[i][j] += mat1[i][k]*mat2[k][j]; 
        } 
    } 
} 

void add(int mat1[][N], int mat2[][N], int res[][N]) 
{ 
    int i, j, k; 
    if((row1 == row2) && (col1==col2)){
	    for (i = 0; i < row1; i++) 
	    { 
	        for (j = 0; j < col1; j++) 
	        { 
	            res[i][j] = 0;
	                res[i][j] += mat1[i][j] + mat2[i][j]; 
	        } 
	    }
	}
	else
		printf("Not Possible to add \n");
} 
  
int main() 
{ 
    int mat1[N][N] ;
  
    int mat2[N][N];
  
    int res[N][N]; // To store result 
    int i, j; 
    printf("\nEnter mat1 dimensions :\n");
    scanf("%d %d",&row1,&col1);
    printf("Enter Matrix1 row wise :\n");
    for(i=0;i<row1;i++){
    	for(j=0;j<col1;j++)
    		scanf("%d",&mat1[i][j]);
    }
    printf("\nEnter mat2 dimensions :\n");
    scanf("%d %d",&row2,&col2);
    printf("Enter Matrix1 row wise :\n");
    for(i=0;i<row2;i++){
    	for(j=0;j<col2;j++)
    		scanf("%d",&mat2[i][j]);
    }
    printf("\nEnter 1 for Addition\nEnter 2 for Multiplication:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1: add(mat1,mat2,res);
					 printf("Result matrix is \n"); 
	 				for (i = 0; i < row1; i++) 
	 				{ 
	     				for (j = 0; j < col1; j++) 
	        				printf("%d ", res[i][j]); 
	     				printf("\n"); 
	 				}
	 				break;

    	case 2:	multiply(mat1, mat2, res); 
  
   				 printf("Result matrix is \n"); 
    				for (i = 0; i < row1; i++) 
	    				{ 
	        				for (j = 0; j < col2; j++) 
	           				printf("%d ", res[i][j]); 
	        				printf("\n"); 
	    				}
    				break;

    } 
  
    return 0; 
} 