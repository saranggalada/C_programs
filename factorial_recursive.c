#include <stdio.h>

int factorial(int n)
{
    if(n==1) return 1;
    else return n*factorial(n-1);
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    long int f=factorial(num);
    printf("Factorial(%d) = %ld", num, f);

    return 0;
}