#include<stdio.h>
int factorial(int number);



int main()
{
    int num,res;
    printf("Enter the number:\n");
    scanf("%d",&num);
    res=factorial(num);
    printf("The factorial is:%d",res);
    return 0;
}
int factorial(int number)
{
    int result=1;
    if(number>0)
    {

        result=number*factorial(number-1);
    }
    return result;
}
