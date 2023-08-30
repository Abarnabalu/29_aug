#include<stdio.h>
char print(str);
int main()
{
    char string[1000];
    printf("Enter the name:\n");
    scanf("%s",&string);
    print(string);
    return 0;
}
char print(str)
{
    printf("hello %s",str);
}
