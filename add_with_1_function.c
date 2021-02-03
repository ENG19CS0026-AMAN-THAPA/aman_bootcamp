//Write a program to add two user input numbers using one function.

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("Sum of two numbers is: ", c);
	return 0;
}
