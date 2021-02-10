//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
#include<math.h>
float input()
{
    float a;
    scanf("%f", &a);
    return a;
}
float distance(float x1, float x2, float y1, float y2, float d)
{
    d = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return(sqrt(d));
}
float show(float dis)
{
    printf("Distance between the points is: %0.4f", dis);
}
int main()
{
    float n1, n2, n3, n4, result;
    printf("Enter the value of x1: ");
    n1 = input();
    printf("Enter the value of x2: ");
    n2 = input();
    printf("Enter the value of y1: ");
    n3 = input();
    printf("Enter the value of y2: ");
    n4 = input();
    result = distance(n1, n2, n3, n4, result);
    show(result);
    return 0;
}
