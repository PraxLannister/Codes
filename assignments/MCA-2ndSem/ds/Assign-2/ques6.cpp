// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(6)
//Problem Statement =======================================================================
/*Write a program in C to display the lower triangular and upper triangular matrix of given 3x3
matrix.*/
#include <iostream>
#include<iomanip>
#define SIZE 3
using namespace std;
void upperTriangularMatrix(int arr[SIZE][SIZE] ,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(i<j)
				cout<<arr[i][j]<<" ";
			else 
				cout<<"  ";
			cout<<endl;
	}
}

void lowerTriangularMatrix(int arr[SIZE][SIZE] ,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(i>j)
				cout<<setw(3)<<arr[i][j]<<" ";
			else 
				cout<<setw(3)<<"  ";
			cout<<endl;
	}
}


int main()
{
/*		#ifndef ONLINE_JUDGE
	    	
	    	freopen("input.txt", "r", stdin);
	    	
	    	freopen("output.txt", "w", stdout);
		#endif*/
	int matrix[SIZE][SIZE];
	printf("\nEnter 3 x 3 MAtrix :\n");
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++)
			cin>>matrix[i][j];
	}
	printf("Its upperTriangularMatrix\n");
	upperTriangularMatrix(matrix,SIZE);
	cout<<"\n===========\n";
	printf("its lowerTriangularMatrix\n");
	lowerTriangularMatrix(matrix,SIZE);


}