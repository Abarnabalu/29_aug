#include<stdio.h>
int add(int a,int b);
int main()
{
int num1,num2;
printf("Enter the 2 numbers:\n");
scanf("%d\n %d",&num1,&num2);
add(num1,num2);
return 0;
}
int add(int a,int b)
{
printf("%d",a+b);
}
