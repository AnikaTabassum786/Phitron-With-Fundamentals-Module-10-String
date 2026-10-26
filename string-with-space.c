#include<stdio.h>
// #include<string.h>

int main(){

    char string[20];
    // gets(string);
    fgets(string,16,stdin);
    printf("%s",string);
    return 0;
}