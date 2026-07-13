#include <stdio.h>
#include <string.h>


// struct user {
//     char name[29];
//     int age;
// };

typedef struct user {
    char name[29];
    int age;
}ud;

void display(struct user s){
    printf("%s\n%d\n" , s.name , s.age);
}

int main(){
    struct user s1;
    strcpy(s1.name, "udayan singh");
    s1.age = 18;

    // struct user s2 = {"mannu", 19};
    ud s2 = {"mannu" , 19};

    struct user s3 ;  // copy old struct
    s3 = s1;

    // printf("%s \n%d\n" , s1.name, s1.age);
    // printf("%s \n%d\n" , s2.name, s2.age);
    // printf("%s \n%d\n" , s3.name, s3.age);

    display(s1);
    display(s2);

    printf("%d\n" , sizeof(s1));  // size

    return 0;
}
8:26