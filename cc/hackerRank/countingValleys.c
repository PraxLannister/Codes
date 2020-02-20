#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int countValleys=0;
    int trek=0;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='U')
        trek++;
        else 
        trek--;
        if(trek==0 && str[i]=='U')
        countValleys++;
    }
    printf("%d\n",countValleys);
    return 0;
}
