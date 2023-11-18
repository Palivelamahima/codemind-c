#include<stdio.h>
int main()
{
    float Salary,HRA,DA;
    scanf("%f%f%f",&Salary,&HRA,&DA);
    float pf=(0.12)*Salary;
    float gs=Salary+HRA+DA+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}