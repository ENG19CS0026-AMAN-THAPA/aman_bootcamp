//WAP to find the sum of n fractions.

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
	printf("Enter numerator: ");
	scanf("%d", &fr.num);
	printf("Enter denominator: ");
	scanf("%d", &fr.deno);
	return fr;
}

FRACT add(FRACT fr1, FRACT fr2)
{
	FRACT res;
	res.deno = fr1.deno * fr2.deno;
	res.num = (fr1.num * fr2.deno) + (fr2.num * fr1.num);
	return res;
}

FRACT display(FRACT fr)
{
	printf("The answer is: %d%d", fr.num, fr.deno);
}

int main()
{
	int n;
	FRACT result;
	printf("Enter the number of fractions: ");
	scanf("%d", &n);
	if (n==1)
		result = input();
	
	return 0;
}
