#include<stdio.h>

int main()
{
    char User[100];
    scanf("%[^\n]s",User);
    printf("\"Hello , %s\"",User);
}