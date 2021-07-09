#include <stdio.h>

int max(int a,int b) {
    int result;
    if (a>b)
        result=a;
    else
        result=b;
    return result;
}
int main(){
    int a,b,c;
    printf("ENTER 1ST-");
    scanf("%d",&a);
    printf("ENTER 2ND-");
    scanf("%d",&b);
    if (a==b){
        printf("BOTH ARE EQUAL");
    }
    else{
        c=max(a,b);
        printf("MAX VALUE IS %d",c);
    }
    return 0;
}
