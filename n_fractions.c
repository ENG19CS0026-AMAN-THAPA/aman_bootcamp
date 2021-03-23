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
	res.num = (fr1.num * fr2.deno) + (fr2.num * fr1.deno);
	res.deno = fr1.deno * fr2.deno;
	return res;
}

int gcd(int num, int deno)
{
	if(num == 0)
	return deno;
	return gcd(deno%num, num);
}

FRACT lowest_form(FRACT fr)
{
	int value = gcd(fr.num, fr.deno);
	fr.num/=value;
	fr.deno/=value;
	return fr;
}

FRACT total(FRACT arr[], int n)
{
	FRACT t;
	t.num = 0;
	t.deno = 1;
	for(int i = 0; i<n; i++)
		t = add(t, arr[i]);
	t = lowest_form(t);
	return t;
}

FRACT display(FRACT res)
{
	printf("The answer is: %d/%d", res.num, res.deno);
}

int main()
{
	int n;
	FRACT result;
	FRACT arr[100];
	printf("Enter the number of fractions: ");
	scanf("%d", &n);
	if(n == 1)
	{
		display(input());
		return 0;
	}
	for(int i = 0; i<n; i++)
		arr[i] = input();
	result = total(arr, n);
	display(result);
	return 0;
}

