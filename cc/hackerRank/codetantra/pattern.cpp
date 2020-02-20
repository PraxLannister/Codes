#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printN(int n)
{
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0 || j== n-1)
                arr[i][j]='*';
            else if(i==j)
                arr[i][j]='*';
            else 
                arr[i][j]=' ';
            
        }

   
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
           cout<<arr[i][j]<<" ";
       cout<<endl;
   }
}


void printK(int n)
{
    char arr[n][n];
    int mid = n/2;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(j == 0)
                arr[i][j]='*';
            else if(i+j == mid)
                arr[i][j]='*';
            else if(i-j==mid)
                arr[i][j]='*';
            else
                arr[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
void printS(int n)
{
    int row =2*n-1;
    int col =n;
    char arr[row][col];
    int mid = n/2;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==0 || i==row-1 || i== row/2)
                arr[i][j]='*';
            else if(j==0 && i<=row/2)
                arr[i][j]='*';
            else if(j==col-1 && i>row/2)
                arr[i][j]='*';
            else arr[i][j]=' ';
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

void printT(int n)
{
    char arr[n][n];
    int mid = n/2;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i == 0)
                arr[i][j]='*';
            else if(j == mid)
                arr[i][j]='*';

            else
                arr[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

void printR(int n)
{
    int i,j,k;
    for(i=1;i<n*2;i++)
    cout<<"* ";
    cout<<endl;
    for(i=1;i<n;i++){
    for(j=1;j<=n*2;j++){
    if(j==1)
    cout<<"*";
    else if(j==n*2)
        cout<<" *";
    else cout<<"  ";
    }
    cout<<endl;
    }
    for(i=1;i<n*2;i++)
    cout<<"* ";

    cout<<endl;
    for(i=1;i<=n;i++){
    for(j=1;j<=n*2;j++){
    if(j==1)
    cout<<"*";
    else if(j==n*2)
        cout<<" *";
    else cout<<"  ";
    }
    cout<<endl;
    }

}

void printA(int n)
{
    int i,j,k;
    for(i=1;i<=n/2;i++){
    for(j=1;j<=n-i;j++)
        cout<<" ";
        cout<<"*";
        for(k=j;k<n+i-2;k++)
        cout<<" ";
        if(i!=1)
    cout<<"*";
    cout<<endl;
    }
    for(i=1;i<=n/2;i++)
    cout<<" ";
    for(i=1;i<=n;i++)
    cout<<"*";

    cout<<endl;

    for(i=1;i<=n/2;i++){
    for(j=1;j<=(n/2-i);j++)
        cout<<" ";
        cout<<"* ";
        for(k=1;k<n+(i-1)*2;k++)
        cout<<" ";
    cout<<"*";
    cout<<endl;

    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        #ifndef ONLINE_JUDGE
            
            freopen("input.txt", "r", stdin);
            
            freopen("output.txt", "w", stdout);
        #endif
    int n;
    cin>>n;
    printN(n);
    cout<<"-------------------------\n";
    printK(n);
    cout<<"-------------------------\n";
    printS(n);
    cout<<"-------------------------\n";
    printT(n);
    cout<<"-------------------------\n";
    printR(n);
    cout<<"-------------------------\n";
    printA(n);
    cout<<"-------------------------\n";

    return 0;
}
