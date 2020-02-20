#include<stdio.h>
int gcd(int a,int b)
{

    if(a==0) return b;
    else return gcd(b%a,a);

}
int lcm(int a,int b)
{
    int hcf=gcd(a,b);
    return (a*b)/hcf;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n],brr[m];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    int lc=arr[0];
    int hc=brr[0];
    for(i=1;i<n;i++)
    {
        lc=lcm(lc,arr[i]);
    }
        for(i=1;i<m;i++)
    {
        hc=gcd(hc,brr[i]);
    }
  //   printf("%d\n",lc);

// printf("%d\n",hc );

    i=2;
    int control=lc;
    int count=0;
    while(control<=hc)
    {
        if(hc%control==0){
            count++;
         //    printf("%d=%d\n",count,lc );

        }
        control=lc*i;
       //  printf("%d<=%d\n",control,hc );



        i++;
    }
    printf("%d\n",count );

    return 0;
}