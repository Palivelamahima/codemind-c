#include<stdio.h>
int main()
{
    int h;
    scanf("%d",&h);
    if(h<=150)
    {
        printf("The person is Dwarf.");
    }
    else if(150<h&&h<=165)
    {
        printf("The person is average heighted.");
    }
    else if(164<h&&h<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}