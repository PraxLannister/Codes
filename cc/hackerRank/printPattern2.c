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
   for(int k=2;k<=n;k++)
   {
	for(int i=n;i>0;i--)
        {
            if(i>=k)
                printf("%d ",i);
            else
                printf("%d ",k);               
        } 

 	for(int j=2;j<=n;j++)
        {
            if(k>=j)
                printf("%d ",k);
            else
                printf("%d ",j);   
        }    
        printf("\n");
    }

}
 
    
      
        
     


