#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2*n;i>0;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}