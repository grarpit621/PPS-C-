#include <stdio.h>

int main() {
   int a,b,c,s;
   printf("ENTER 1ST NUMBER-");
   scanf("%d",&a);
   printf("ENTER 2ND NUMBER-");
   scanf("%d",&b);
   printf("ENTER 3RD NUMBER-");
   scanf("%d",&c);
   if (a>b){
    s=a;
   }
   else{
        (s=b);
   }
   if (c>s){
    s=c;
   }
   printf("HIGHEST NUMBER IS %d",s);
   return 0;
}
