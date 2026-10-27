#include<stdio.h>

int main(){

    char a[100];
    scanf("%s",&a);
    printf("%s\n",a);

    int count = strlen(a);
    printf("%d",count);
    
    return 0;
}