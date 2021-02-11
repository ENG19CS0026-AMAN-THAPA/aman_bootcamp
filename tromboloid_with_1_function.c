//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
int main()
{
	float vol, h, d, b;
	printf("Input the values of h, d, b respectively: \n");
	scanf("%f%f%f", &h, &d, &b);
	vol = ((h*b*d) + (d/b)) * 1/3;
	printf("Volume of the tromboloid with h = %f, d = %f and b = %f is: %0.4f\n", vol);
	return 0;
}
