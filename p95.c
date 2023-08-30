#include<stdio.h>
int expo(int base,int power);
int main()
{
    int ba,pow,result;
    printf("Enter the values of base and power:\n");
    scanf("%d\n %d",&ba,&pow);
    result=expo(ba,pow);
    printf("The exponential is: %d",result);
    return 0;
}
int expo(int base,int power)
{
    if(power!=0)
    {
        return base*(expo(base,power-1));
    }
    else
    {
        return 1;
    }
}

