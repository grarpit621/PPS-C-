#include<stdio.h>
int main()
{
    int n;
    printf("ENTER LENGTH-");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("ENTER ELEMENT-");
        scanf("%d",&a[i]);
    }
    int s,*p,c,index;
    p=a;
    printf("ENTER ELEMENT TO BE SEARCHED-");
    scanf("%d",&s);
    for (int i=0;i<n;i++)
    {
        if (*p==s)
        {
            c=1;
            index=i;
            break;
        }
        p++;
    }
    if (c==1)
    {
        printf("FOUND AT %d",index+1);
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}
