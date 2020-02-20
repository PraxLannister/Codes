#include<stdio.h>
#include<string.h>
void toLower(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]-'A'+'a';
    }

}
int main()
{

    char str[10001];
    gets(str);
    toLower(str);
    int hash[26]={0};
    int i;
    printf("%s\n",str );
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        hash[str[i]-'a']++;
    }
    int flag=1;
    for(i=0;i<26;i++)
    {
        if(hash[i]!=0)
        {
            flag=0;
            break;
        }

    }
    if(flag)
    printf("pangram\n");
    else 
    printf("non pangram\n");
}
