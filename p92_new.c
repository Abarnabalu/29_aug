#include<stdio.h>
#define PI 3.14
float volume(float rad);
int main()
{
    float radius;
    printf("Enter the radius of sphere:\n");
    scanf("%f",&radius);
    volume(radius);
    return 0;
}
float volume(float rad)
{
    float result = ((4/3)*PI*rad*rad*rad);
    printf("The volume is:%.3f\n",result);


}
