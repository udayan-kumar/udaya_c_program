#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40};
    
    int length = sizeof(arr)/sizeof(arr[0]);

//   for(int i = 0; i<length;i++){
//     printf("%d " , arr[i]);
//   }

    int low = 0;
    int high = length-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    for(int i = 0; i<length;i++){
        printf("%d " , arr[i]);
    }

    return 0;

}
