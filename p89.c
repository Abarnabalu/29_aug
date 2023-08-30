#include<stdio.h>
float sum(float a,float b);
int main()
{
    int integer,fp;
    printf("Enter the number:\n");
    scanf("%d\n %d",&integer,&fp);
    sum(integer,fp);
    return 0;
}
float sum(float a,float b)
{
    float result=a+b;
    printf("The product of the numbers is:%.2f\n",result);
}
