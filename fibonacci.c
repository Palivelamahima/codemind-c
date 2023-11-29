#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0,count=0;
    while(count<=n-1)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        count++;
    }
}