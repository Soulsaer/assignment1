#include<stdio.h>
int main()
{
    int d, m, year;
    printf("Enter date (dd/mm/yy): ");
    scanf("%d/%d/%d", &d,&m,&year);
    printf("Day-%d, Month-%d, Year-%d",d,m,year);
    return 0;
}
