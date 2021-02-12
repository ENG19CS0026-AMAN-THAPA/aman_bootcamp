//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct Points
{
	float i;
};
float input()
{
    struct Points a;
    scanf("%f", &a.i);
    return a.i;
}
float distance(float x1, float x2, float y1, float y2)
{
    float x, y, d;
    x = pow((x1 - x2), 2);
    y = pow((y1 - y2), 2);
    d = x + y;
	return(sqrt(d));
}
void show(float dis)
{
    printf("Distance between the points is: %0.4f", dis);
}
int main()
{
	
    float x1, x2, y1, y2, result;
	printf("\nEnter coordinates of first point: \n");
	printf("Enter the value of x1: ");
	x1 = input();
	printf("Enter the value of y1: ");
	y1 = input();
	printf("\nEnter coordinates of second point: \n");
	printf("Enter the value of x2: ");
	x2 = input();
	printf("Enter the value of y2: ");
	y2 = input();
    result = distance(x1, x2, y1, y2);
    show(result);
	return 0;
}

