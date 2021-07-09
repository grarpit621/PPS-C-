#include <stdio.h>
int main() {
    char str1[100];
    char str2[100];
    int i = 0, j = 0;
    int size;
    printf("\nEnter string: ");
    scanf("%s",&str1);
    size=strlen(str1);
    for (i=0;i<size;i++) {
        str2[i]=str1[i];
    }
    for (j=0;j<size;j++) {
        printf("%c",str2[j]);
    }
    return 0;
}
