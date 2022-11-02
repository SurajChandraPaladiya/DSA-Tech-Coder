#include<stdio.h>

long long int factorial(long long int x){

    if(x==0||x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){

    long long int num, fact;
    printf("Enter the number:\n");
    scanf("%lld", &num);

    fact=factorial(num);
    printf("Factorial= %lld", fact);
    return 0;
}