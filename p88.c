#include<stdio.h>
int main()
{
int number;
printf("Enter the number to be squared:\n");
scanf("%d",&number);
square(number);
return 0;
}
int square(int a)
{
int result=a*a;
printf("The square of the number is:%d\n",result);
}
