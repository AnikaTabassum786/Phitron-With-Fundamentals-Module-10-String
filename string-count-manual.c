#include<stdio.h>

int main(){

    char a[30];
    scanf("%s",&a);
    printf("%s\n",a);
    int count = 0;

    for(int i=0; a[i] != '\0' ;i++){
       count=count+1;
    }

    printf("%d",count);
     return 0;
}