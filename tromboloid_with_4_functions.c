//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float input()
{
    float x;
    printf("Enter value: \n");
    scanf("%f", &x);
    return x;
}
float volume(float h, float d, float b)
{
    return (((h*d*b)+ (d/b))* 1/3);
}
void show(float v1, float v2, float v3, float vol)
{
    printf("Volume of tromboloid is : %f", vol);
}
int main()
{
    float n1, n2, n3, result;
    n1 = input();
    n2 = input();
    n3 = input();
    result = volume(n1, n2, n3);
    show(n1, n2, n3, result);
    return 0;
}

