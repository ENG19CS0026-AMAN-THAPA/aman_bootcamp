//WAP to find the sum of two fractions.

#include<stdio.h>
struct st
{
int num;
int deno;
};

typedef struct st fraction;

fraction input_frac ()
{
fraction f;
printf ("Enter the numerator:\n");
scanf ("%d", &f.num);
printf ("Enter the denominator:\n");
scanf ("%d", &f.deno);
return f;
}

int gcd (int num, int deno)
{
if (num == 0)
return deno;
return gcd (deno % num, num);
}

fraction lowest_term (fraction f, int div)
{
f.num = f.num / div;
f.deno = f.deno / div;
return f;
}

fraction addition (fraction f1, fraction f2)
{
fraction res;
res.deno = f1.deno * f2.deno;
res.num = (f1.num * f2.deno) + (f2.num * f1.deno);
int div = gcd (res.num, res.deno);
res = lowest_term (res, div);
return res;
}

void output (fraction f1, fraction f2, fraction res)
{
printf ("The sum of fractions %d/%d and %d/%d is: %d/%d\n", f1.num,
	  f1.deno, f2.num, f2.deno, res.num, res.deno);
}

int main()
{
fraction a, b, c;
a = input_frac ();
b = input_frac ();
c = addition (a, b);
output (a, b, c);
return 0;
}

