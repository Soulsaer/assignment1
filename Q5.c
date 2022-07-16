#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    scanf("%[^\n]s", A);
    printf("%d",strlen(A));
}