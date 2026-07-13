#include <stdio.h>

int fact(int n);

int main(){
    printf("factorial = %d" , fact(10));
    return 0;
}

int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}