#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "mannu";
    char str[] = "udayan singh";

    printf("%s\n" , s);
    printf("%d\n" , strlen(str)-1);  // size 

    strcpy(s,str);  // for copying
    printf("%s\n", s);
    printf("%s\n" , str);

    strcat(s,str);  // concatination
    printf("%s\n" , s);
    printf("%s\n" , str);

    int ans = strcmp(s,str);  // compaire
    printf("%d\n" , ans);

    return 0;
}