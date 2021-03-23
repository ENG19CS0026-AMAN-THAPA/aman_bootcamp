//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct points
{
	int x,y;
}p1, p2;

void input()
{
printf("Enter the coordinates for point 1: ");
	scanf("%d%d",&p1.x, &p1.y);
	printf("Enter the coordinates for point 2: ");
	scanf("%d%d", &p2.x,&p2.y);
	printf("%d %d %d %d\n", p1.x,p1.y, p2.x, p2.y);
}

void display(float d)
{
	printf("The distance between (%d,%d) and (%d,%d) is %f units\n", p1.x, p1.y, p2.x, p2.y,d);
}

int main()
{
	float dis;
	int xco, yco;
	input();
	xco = pow((p1.x - p2.x),2);
	yco = pow((p1.y- p2.y),2);
	dis = sqrt(xco+yco);
	display(dis);
	return 0;
}

