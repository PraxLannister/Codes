#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n ;
    printf("\nntr : ");
    scanf("%d", &n);
    int s = (2*n)-1;
    int arr[s][s];
    int f = 0,l;
    l=s-1;
while(n!=0){
    for(int i =f;i<=l;i++){
    for(int j=f;j<=l;j++)
    {if(i==f||i==l||j==f||j==l)
    arr[i][j]=n;
    }
    }

    f++;
    l--;
    n--;
}
for(int i=0;i<s;i++){
for(int j=0;j<s;j++)
printf("%d ",arr[i][j]);
if(i<s-1)
printf("\n");
}

    return 0;
}


