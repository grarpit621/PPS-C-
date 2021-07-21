#include <stdio.h>
 void main() {
     int r,c,i,j,l;
     printf("ENTER NO. OF ROWS ");
     scanf("%d",&r);
     printf("ENTER NO. OF COLUMNS ");
     scanf("%d",&c);
     int a[r][c];
     for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            printf("ENTER ELEMENT ");
            scanf("%d",&l);
            a[i][j]=l;
        }
     }
     for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
     }
 }

