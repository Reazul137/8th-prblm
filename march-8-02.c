#include<stdio.h>
int main()
{
    int days, weeks, years;

    days= 1329;

    years = days/365;
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

     printf("Years : %d\n", years);
     printf("weeks : %d\n", weeks);
     printf("days  : %d\n", days);

     return 0;
}
