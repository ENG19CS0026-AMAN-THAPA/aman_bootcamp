//WAP to find the sum of two fractions.

#include<stdio.h>
struct fract
{ 	
int num;
int deno;
};
typedef struct fract FRACT;

FRACT input()
{
	FRACT fr;
	printf("Enter numerator of the fraction: ");
	scanf("%d", &fr.num);
	printf("Enter denominator of the fraction: ");
	scanf("%d", &fr.deno);
	printf("The entered fraction is: %d/%d\n", fr.num, fr.deno);
	return fr;
}

int sumf(int a, int b, int c, int d)
{
int i, x, y, gcd, sum;
x = (a*d) + (c*b);
y = b*d;
	for(int i=1; i<=x && i<=y; i++)
	{
		if((x%i==0)&&(y%i == 0))
			gcd = i;
	}
	x = x/gcd; y = y/gcd;
	disp(x,y);
}
void disp(int x, int y)
{
    printf("The sum of entered fractions is %d/%d", x, y);
}

int main()
{
	FRACT o, t;
	int sum;
	printf("FRACTION 1 -\n");
    	o = input();
   	printf("FRACTION 2 -\n");
	t = input();
	sum = sumf(o.num, o.deno, t.num, t.deno);
	return 0;
}
