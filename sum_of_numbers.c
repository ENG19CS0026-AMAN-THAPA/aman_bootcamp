//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int a[100], coun, sum=0;
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
	printf("The sum of the given numbers is: %d", sum);
}
int main()
{
	int x, y;
	x = count_no();
	y = input(x);
	display(y);
}
