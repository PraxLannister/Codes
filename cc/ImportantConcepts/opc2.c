#include<stdio.h>
int main()
{
    int sh,sm,eh,em,hh,mm;
    int t,test;
    scanf("%d",&test);
    for(t=0;t<test;t++)
    {
        scanf("%d %d %d %d",&sh,&sm,&eh,&em);
        if(em<sm)
        {
            int temp = 60-sm;
            mm=temp+em;
            hh=eh-sh-1;

        }
        else {
            mm=em-sm;
            hh=eh-sh;
        }
        printf("%d %d",hh,mm);


    }
    return 0;
}