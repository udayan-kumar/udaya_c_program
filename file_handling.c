#include <stdio.h>

int main(){
    FILE *fptr = fopen("temp.text" , "read");

    if(fptr==NULL){
        printf("no such file exist\n");
        return 0;
    }
    printf("file exist\n");
}
9:39