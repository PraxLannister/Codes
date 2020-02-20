
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() 
{

    int n;
    printf("\nEnter : ");
    scanf("%d", &n); 
   for(int i=n;i>0;i--)
    {
        for(int j=n;j>0;j--)
        {
            if(i>=j)
                printf("%d ",i);
            else
                printf("%d ",j);
        }    

       for(int j=2;j<=n;j++)
        {
            if(i>=j)
                printf("%d ",i);
            else
                printf("%d ",j);
        }    
        
        printf("\n");
      
   } 
}
