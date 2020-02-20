#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,noTC,size,key;
    scanf("%d",&noTC);
    printf("noTC%d\n",noTC );
    for(i=0;i<noTC;i++){ 
    scanf("%d",&size);
    int arr[size];
  	int index,index1;
    int flag=1;
printf("\nProcess entee\n");
 
    for(j=0;j<size;j++) scanf("%d",&arr[j]);
printf("\nProcess Key\n");
   
    scanf("%d",&key);
printf("\nProcess\n");
    
            for(k=0;k<size;k++)
        {
            if(flag==0) continue;
            if(arr[j]==key)
            {
                index=k;
                index1=k+1;
                flag=0;
            }
        }
        if(flag==0)
    		{
    			printf("%d\n",index);
                printf("%d\n",index1);
    		}
    		else
    		{
    			printf("Not Found\n");
    			printf("-1\n");
    		}
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    return 0;
}
