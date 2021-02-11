//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Points
{
	float x, y;
};
float distance(struct Points x2, struct Points x1, struct Points y2, struct Points y1)
{
	float d;
	d = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return(sqrt(d));
}
int main()
{
	struct Points x2, x1, y2, y1;
	printf("\nEnter coordinates of first point: \n");
	printf("Enter the value of x1: ");
	scanf("%f", &x1);
	printf("Enter the value of x2: ");
	scanf("%f", &x2);
	printf("\nEnter coordinates of second point: \n");
	printf("Enter the value of y1: ");
	scanf("%f", &y1);
	printf("Enter the value of y2: ");
	scanf("%f", &y2);
	printf(\nDistance between two points is: %0.4f\n", distance(x2, x1, y2, y1));
	return 0;
}
