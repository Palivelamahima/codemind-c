#include<stdio.h>
int main()
{
    float r;
    float vol,pi=3.14;
    scanf("%f",&r);
    vol=(pi*(r*r*r)*4)/3;
    printf("%.2f",vol);
    return 0;
}