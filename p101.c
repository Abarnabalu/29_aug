#include<stdio.h>

int fn();
float fn1();
char fn2();
double fn3();

int main()
{
    int fn();
    float fn1();
    char fn2();
    double fn3();

    return 0;
}
int fn(void)
{
    printf("fn 1 entered\n");
    int a;
    printf("val is %d\n",a);
    return a;
}
float fn1(void)
{
    float b;
    printf("%.2f\n",b);
    return b;
}
char fn2(void)
{
    char c;
    printf("%c\n",c);
    return c;
}
double fn3(void)
{
    double d;
    printf("%lf\n",d);
    return d;
}

