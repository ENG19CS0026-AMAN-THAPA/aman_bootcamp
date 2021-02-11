//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Points
{
	float x, y;
};
float distance(struct Points a, struct Points b)
{
	float d;
	d = ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	return(sqrt(d));
}
int main()
{
	struct Points a, b;
	printf("\nEnter coordinates of first point: \n");
	printf("Enter the value of x1: ");
	scanf("%f", &a.x);
	printf("Enter the value of x2: ");
	scanf("%f", &a.y);
	printf("\nEnter coordinates of second point: \n");
	printf("Enter the value of y1: ");
	scanf("%f", &b.x);
	printf("Enter the value of y2: ");
	scanf("%f", &b.y);
	printf("\nDistance between two points is: %0.4f\n", distance(a, b));
	return 0;
}
