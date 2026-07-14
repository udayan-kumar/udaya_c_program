#include <stdio.h>
#include <stdlib.h>

int main(){
//    int *ptr = (int*) malloc(5*sizeof(int));  // change their default value;; default value is not fixed
   int *ptr = (int*) calloc(5,sizeof(int));  // default value is 0 ;; that is fixed

   if(ptr == NULL) {
    printf("memeory is insufficient\n");
    return 1;
   }


   ptr[0] = 10;
   ptr[1] = 20;
   ptr[2] = 30;
   ptr[3] = 40;
   ptr[4] = 50;

   for(int i = 0; i<5;i++){
    printf("%d\n " , ptr[i]);
   }

//    free(ptr);
ptr = realloc(ptr , 10*sizeof(int));  // for increasing size of array

   for(int i = 0; i<10;i++){
    printf("%d\n " , ptr[i]);
   }

   return 0 ;
}