#include <stdio.h>

enum val{
    n1=10, n2, n3=30, n4=40
    // default value is 0 and continue with +1;;
    // must be same type
};

int main(){
    int num = n1;
    enum val num2 = n4;
    int num3 = n2;
    printf("%d\n" , num);
     printf("%d\n" , num2);
      printf("%d\n" , num3);
    return 0;
}