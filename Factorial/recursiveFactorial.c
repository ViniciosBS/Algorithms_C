#include<stdio.h>
#include<stdlib.h>
double factorial(double n){
    if (n<=1)
        return 1;
    else{
       return n*factorial(n-1);
    }
}

void main(void)
{
    int n;
    printf("Enter a number to calculate the factorial: ");
    scanf("%d",&n);
    printf("\nResult: %0.0lf\n",factorial(n));
}
