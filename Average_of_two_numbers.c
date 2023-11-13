#include<stdio.h>
int main()
{
    float num1,num2,c;
    scanf("%f%f",&num1,&num2);
    c=(num1+num2)/2;
    printf("Average of %.0f and %.0f is: %.2f",num1,num2,c);
}