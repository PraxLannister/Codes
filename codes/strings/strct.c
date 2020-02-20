#include <stdio.h>
int main() {
  /* code */
  char * strcat(char *, char *);
  char a[50],b[50];
  printf("\nntr 2 strngs\n" );
  scanf("%s%s",a,b );
  printf("\nAfter concatination : %s ",strcat(a,b));
  return 0;
}
char * strcat(char * p,char *q){
  int i=0,j=0;
  while(p[i]) i++;
  while(p[i]=q[j])
  {
    i++;
    j++;
  }
 return p;
}
