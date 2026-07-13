#include <stdio.h>

int sum(int a , int b);  // decleration of function

void printing();

int main(){
    printf("sum = %d\n" , sum(2,5));  // print and call the function

    printing();
    return 0;
}

int sum(int a , int b){  // impletstion of function
    return a+b;
}

void printing(){
    for(int i = 0; i<5;i++){
        printf("udayan singh\n");
    }
}