#include<stdio.h>
int main()
{
    int years,days,weeks;
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    printf("%d
%d",years,weeks);
    return 0;
}