#include <stdio.h>
void fibonacci(double n){
    int i;
    double ft=0, st=1, value;
    if(n==1){
        printf("%0.0lf\n",st);
    }
    else{
        printf("%0.0lf\n",st);
        for(i = 0; i < n; i++){
            value = ft + st;
            ft = st;
            st = value;
            printf("%0.0lf\n", value);
        }
    }
}

int main(){
    double n;
    printf("Enter the end of the sequence: ");
    scanf("%lf", &n);
    fibonacci(n);
    return 0;
}
