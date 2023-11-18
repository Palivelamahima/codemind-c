#include<stdio.h>
int main()
{
    int H,M,Min;
    scanf("%d",&Min);
    printf("%d Hour(s) %d Minute(s)",Min/60,Min%60);
}