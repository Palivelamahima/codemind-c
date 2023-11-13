#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    float prof=((y-x)/x)*100;
    printf("%.2f",prof);
}