#include <stdio.h>
void main(){
    int n1=0,n2=1,s,c,a;
    printf("enter no. of terms-");
    scanf("%d",&c);
    printf("%d\n",n1);
    for (s=2;s<=c;s=s+1){
        n1=n2;
        n2=a;
        a=n1+n2;
        printf("%d\n",a);
    }

}
