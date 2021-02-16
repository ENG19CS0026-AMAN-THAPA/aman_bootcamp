//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int a, coun, sum;
int input(int coun)
{
	int i;
	printf("Enter the numbers: ");
	for(i = 0; i<coun; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i<coun; i++)
	{
		sum = sum + a[i];
	}
	return sum;
}
int count_no()
{
	printf("Enter the count: ");
	scanf("%d", &coun);
	return coun;
}
int display()
{
	printf("The sum of the given number is: %d", sum);
}
int main()
{
	int x, y;
	d = count_no();
	b = input(d);
	display(b);
}
