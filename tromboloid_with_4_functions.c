//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float vol(float, float, float);
int main()
{
	float h, d. b;
	printf("Enter the values of h, d, b respectively: \n");
	scanf("%f%f%f", &h, &d, &b);
	printf("Volume of tromboloid is: %f", vol(h, d, b));
	return 0;
}
float vol(float h, float d, float b)
{
	return(((h*d*b) + (d/b)) * 1/3);
}
