//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
int main()
{
	float vol, h, d, b;
	printf("Input the values of h, d, b respectively: \n");
	scanf("%f%f%f", &h, &d, &b);
	vol = 1/3((h*b*d) + (d/b))
	printf("Volume of the tromboloid is: %f", vol);
	return 0;
}
