#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int c=(*a)+(*b);
    int d=(*a>*b)?((*a)-(*b)):((*b)-(*a));
    *a=c;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("\n Enter two numbers :");    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("\nThe updated value is :");
    printf("%d\t%d", a, b);

    return 0;
}


