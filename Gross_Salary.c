#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    float d,h,gs;
    if(bs<=10000)
    {
        d=0.8;
        h=0.2;
    }
    else if(bs>10000&&bs<=20000)
    {
        d=0.9;
        h=0.25;
    }
    else
    {
        d=0.95;
        h=0.3;
    }
    gs=bs+d*bs+h*bs;
    printf("%.2f",gs);
}