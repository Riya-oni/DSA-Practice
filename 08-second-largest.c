#include <stdio.h>

int main() {
    int arr[]={20,10,20,4,100};
    int first=arr[0];
    int second=-1;
    for(int i=1;i<5;i++){
        if (arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if (arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    printf("second largest is: %d", second);
    return 0;
}