#include<stdio.h>
#include<stdlib.h>

int main()
{
    int days;
    printf("Days: ");
    scanf("%d", &days);

    int years,weeks;

    years = days/365;
    weeks = (days % 365) / 7;
    days = days - (365 * years) - (7 * weeks);

    printf("%d Years\n%d Weeks\n%d Days", years,weeks,days);

    return 0;
}
