//WAP to find the sum of two fractions.

#include<stdio.h>
struct fract
{
    int num, deno;
}x, y;
int input1()
{
    printf("Enter numerator of fraction 1: ");
    scanf("%d", &x.num);
    printf("Enter the denominator of fraction 1: ");
    scanf("%d", &x.deno);
}
int input2()
{
    printf("Enter numerator of fraction 2: ");
    scanf("%d", &y.num);
    printf("Enter denominator of fraction 2: ");
    scanf("%d", &y.deno);
}
int gcd_calc()
{
    int gcd, a, b, i;
    a = (x.num*y.deno) + (y.num*x.deno);
    b = x.deno*y.deno;
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i == 0)
        gcd = i;
    }
    printf("%d/%d + %d/%d\n", x.num, x.deno, y.num, y.deno);
    printf("The added fraction is %d/%d", a/gcd, b/gcd); 
}
int main()
{
    input1();
    input2();
    gcd_calc();
}
