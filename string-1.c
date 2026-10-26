#include <stdio.h>

int main()
{

    char a[10];

    scanf("%s", &a);
    printf("%s\n", a);
    printf("%c\n", a[2]);
    printf("%c\n", a[5]);
    printf("%d\n", a[5]);
    printf("%c", a[7]);
    return 0;
}