//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
int sum(int, int);
int main()
{
	int a, b;
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	printf("Sum of the given numbers is: %d\n", sum(a, b));
	return 0;
}
int sum(int x, int y)
{
	return(x+y);
}
