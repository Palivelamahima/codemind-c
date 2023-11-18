#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int H=x/3600;
    int M=(x%3600)/60;
    int S=x%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}