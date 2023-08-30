#include<stdio.h>
int main()
{
int num1,num2,choice;
printf("Enter two values:\n");
scanf("%d\n %d",&num1,&num2);
printf("Print any number from 1 to 4:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
scanf("%d",&choice);
switch(choice)
{

case 1: add(num1,num2);
break;
case 2: subtract(num1,num2);
break;
case 3: multiply(num1,num2);
break;
case 4: divide(num1,num2);
break;
default: printf("please enter correct value");
}
return 0;
}
int add(int a,int b)
{
int result=a+b;
printf("The addition of 2 values is : %d",result);
return result;
}
int subtract(int a,int b)
{
int result=a-b;
printf("The subtraction of 2 values is : %d",result);
return result;
}
int multiply(int a,int b)
{
int result=a*b;
printf("The product of 2 values is : %d",result);
return result;
}
int divide(int a,int b)
{
int result=a/b;
printf("The division of 2 values is : %d",result);
return result;
}
