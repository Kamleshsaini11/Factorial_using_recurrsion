#include<stdio.h>
// function for find out factorial
int fact(int n)
{
    int temp=1;
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    printf("Enter the number whose you want to find factorial ");
    int n;
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial of given number is %d",f);
}
