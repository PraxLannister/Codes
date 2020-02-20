// Author - Prakhar Shekhar Parthasarthi
// Roll No - 2019CA66
// Date Created - Jan 8th 2020
// Description - Ass1-8- Print Pyramid of nos 	

#include<stdio.h>
int main() {
    int i, j, rows, k=0, count=0, count1=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++) {
        for (j=1; j<=rows-i;j++) {
          printf("  ");
          ++count;
        }
        while (k!=2*i-1) {
            if (count <= rows-1)
            { printf("%d ", i+k);
              ++count;
            }
            else {
              ++count1;
              printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1=count=k=0;
        printf("\n");
    }
    return 0;
}