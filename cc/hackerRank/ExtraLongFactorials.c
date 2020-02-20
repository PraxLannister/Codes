#include<stdio.h>
#define MAX 200
void reverse(int arr[],int start,int end)
{
    int i,j;
    for(i=start,j=end;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

}

int main()
{
    int fact[MAX]={1};
    int num;
    scanf("%d",&num);
    int i,j;
    int carry=0,temp;
    for(i=2;i<=num;i++)
    {
        carry=0;
        for(j=0;j<MAX;j++)
        {
            temp=(i*fact[j])+carry;
            fact[j]=temp%10;
            carry=temp/10;
        }
    }
    i=MAX-1;
    while(!fact[i])
        i--;
    int end=i;
    reverse(fact,0,end);
    for(i=0;i<=end;i++)
        printf("%d",fact[i] );


    return 0;
}