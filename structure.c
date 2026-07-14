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

typedef struct student_details{
    char name[30];
    int roll_number;
    int marks;
}student;


int main(){
    // struct user s1;
    // strcpy(s1.name, "udayan singh");
    // s1.age = 18;

    // // struct user s2 = {"mannu", 19};
    // ud s2 = {"mannu" , 19};

    // struct user s3 ;  // copy old struct
    // s3 = s1;

    // printf("%s \n%d\n" , s1.name, s1.age);
    // printf("%s \n%d\n" , s2.name, s2.age);
    // printf("%s \n%d\n" , s3.name, s3.age);

    // display(s1);
    // display(s2);

    // printf("%d\n" , sizeof(s1));  // size

     student stu1[3] = {{"udayan singh" , 12, 98}, {"mannu" , 23 , 93} , {"tannu" , 34, 87}};

    for(int i = 0 ; i<3;i++){
        printf("%s\n" ,stu1[i].name);
        printf("%d\n" ,stu1[i].roll_number);
        printf("%d\n" ,stu1[i].marks);
    }
    

    return 0;
}
