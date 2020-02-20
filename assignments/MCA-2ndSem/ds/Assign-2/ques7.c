// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 14th 2020
// Description - Assignment-2-(7)
//Problem Statement =======================================================================
// Write a program in C to find two elements whose sum is closest to zero.(Elements of array
//can be negative no also).


#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,j,min,x1,x2;
 printf("Enter size of array: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter array elements: ");
 for(i=0;i<n;i++)
  { 
   scanf("%d",&a[i]);
  }
 min=abs(a[0]+a[1]); 
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
   {
      if(abs(a[i]+a[j])<=min)
      {
        min=abs(a[i]+a[j]);
        x1=a[i];
        x2=a[j];
       }
    }
  }

 printf("Two elements whose sum is closest to zero are: %d and %d\nTheir sum is: %d\n",x1,x2,x1+x2);
 return 0;
}
