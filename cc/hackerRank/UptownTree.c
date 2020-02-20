#include<stdio.h>

int main()
{
int heightTable[61];
int i;
int height=1;
heightTable[0]=height;
for(i=1;i<61;i++)
{
    if(i%2==0)
    height++;
    else
    height*=2;
    heightTable[i]=height;
}
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",heightTable[n]);
    }

    return 0;
}