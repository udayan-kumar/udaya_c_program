#include <stdio.h>

int main(){
    int num;
    char ch;

     

    printf("enter the integer value: ");
    scanf("%d" , &num);

    // getchar();

    printf("enter character value: ");
    scanf(" %c" , &ch);
   
   printf("integer = %d, character = %c\n" , num , ch);

    // printf("size of int %d\n" , sizeof(num));  // for checking size
    return 0;
}