// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-10-to generate odd sized magic squares 
 	
#include<stdio.h> 
#include<string.h> 

void createMagicSquare(int n) 
{ 
	int MGsquare[n][n]; 
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			MGsquare[i][j]=0;
	}

	i = n/2; 
	j = n-1; 

	for (int num=1; num <= n*n; ) 
	{ 
		if (i==-1 && j==n) 
		{ 
			j = n-2; 
			i = 0; 
		} 
		else
		{ 
			if (j == n) 
				j = 0; 
			if (i < 0) 
				i=n-1; 
		} 
		if (MGsquare[i][j])
		{ 
			j -= 2; 
			i++; 
			continue; 
		} 
		else
			MGsquare[i][j] = num++;

		j++; i--; 
	}
	printf("The Magic Square for n=%d:\n", n); 
	for (i=0; i<n; i++) 
	{ 
		for (j=0; j<n; j++) 
			printf("%3d ", MGsquare[i][j]); 
		printf("\n"); 
	}  
}

int main()
{ 
	int n ;
	printf("\nEnter odd number To Create Magic square:\n");
	scanf("%d",&n);
	createMagicSquare(n); 
	return 0; 
} 
