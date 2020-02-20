#include<stdio.h>
int main()
{
    int i=0,n,k;
    scanf("%d",&n);
    char str[101];
    scanf("%s",str);
    scanf("%d",&k);
    while(str[i])
    {
        char ch=str[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch-'a';
            ch=((ch+k)%26)+'a';
            str[i]=ch;

        }
        if(ch>='A' && ch<='Z')
        {
            ch=ch-'A';
            ch=((ch+k)%26)+'A';
            str[i]=ch;

        }
        i++;
    }
    printf("%s\n",str   );
    return 0;
}