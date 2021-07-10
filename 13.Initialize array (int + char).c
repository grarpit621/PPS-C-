#include <stdio.h>
int main()
{
    int n;
    printf("ENTER LENGTH OF ARRAY-");
    scanf("%d",&n);
    int a[n];
    char b[n];
    for (int i=0;i<n;i++)
    {
        printf("ENTER ELEMENTS-");
        scanf("%d",&a[i]);
    }
    gets(a);
    for (int j=0;j<n;j++)
    {
        scanf("%s ",&a[j]);
    }
    return 0;
}
