#include<stdio.h>
double factorial(int n)
{
    double fat;
    for(fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }
}
void main(void)
{
    int n;
    printf("Enter a number to calculate the factorial: ");
    scanf("%d",&n);
    printf("\nResult: %0.0lf\n",factorial(n));
}

