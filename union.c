#include <stdio.h>

union user{
    int age;
    char name;
};


int main(){
    union user s1;
    s1.age = 18;  // replace the value with ASCII value of 'a
    s1.name = 'a';
    printf("%d\n %c\n" , s1.age , s1.name);
    return 0;
}