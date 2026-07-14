#include <stdio.h>
#define PI 3.14  // for const any value

int main(){
    // const int age = 20;  // i can't change the value of age 
    // printf("%d" , age);

    int r = 7;
    float area = PI*r*r;
    printf("%.2f" , area);
    return 0;
}