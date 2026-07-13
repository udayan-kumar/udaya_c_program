#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = &x;  // store address of x
    int **ptr2 = &ptr;  // store addres of *ptr

    printf("%u\n" , x);
    printf("%d\n" , *ptr);
    printf("%p\n" , ptr2);
    printf("%p\n" , &ptr);
    printf("%d\n" , **ptr2);
    return 0;
}