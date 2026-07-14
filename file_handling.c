#include <stdio.h>

int main(){
    // FILE *fptr = fopen("temp.text" , "w");
    FILE *fptr = fopen("temp.text" , "r");

    char name[30];
    int age;

    if(fptr==NULL){
        printf("no such file exist\n");
        return 0;
    }
    // fputc('a' , fptr);  // for witing
    // fputc('p' , fptr);
    // fputc('p' , fptr);
    // fputc('l' , fptr);
    // fputc('e' , fptr);

    // fputs("mannu sinh" , fptr);

    // fprintf(fptr , "%s %d" , "udayan singh" , 20);

    // fscanf(fptr , "%s %d" , name , &age);
    // printf("%s %d\n" , name , age);
    
   fgets(name , 100 , fptr);
   printf("%s %d\n" , name , age);
   fclose(fptr);
    return 0;
}
