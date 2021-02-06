//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
int input()
{
    int x;
    printf("Enter number: \n");
    scanf("%d", &x);
    return x;
}
int add(int a, int b)
{
    return a + b;
}
void show(int c, int d, int sum)
{
    printf("Sum of entered numbers is : %d", sum);
}
int main()
{
    int n1, n2, result;
    n1 = input();
    n2 = input();
    result = add(n1, n2);
    show(n1, n2, result);
    return 0;
}
