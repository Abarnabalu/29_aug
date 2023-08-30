#include <stdio.h>

int lcm(int num1, int num2);

int main()
{
    int n1, n2, result;

    printf("Enter two numbers:\n ");
    scanf("%d%d", &n1, &n2);
    result = lcm(n1, n2);  //call the function lcm recursively.
    printf("The LCM of %d and %d is %d\n", n1, n2, result);
    return 0;
}

int lcm(int num1, int num2)
{
    static int count = 1;

    if (count % num1 == 0 && count % num2 == 0)
    {
        return count;
    }
    count++;
    lcm(num1, num2);
}
