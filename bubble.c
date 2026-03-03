// 5 3 8 1 2

//3 5 1 2 8

//3 1 2 5 8

//1 2 3 5 8 

#include <stdio.h>

int main(){
    int arr[5] = {5,3,8,1,2};
    int i,j,temp;

    for(i=0;i<5-1;i++){ //
        for(j=0;j<5-1-i;j++){ //1<4-0
            if(arr[j]>arr[j+1]){ //arr[j] =5 arr[j+1] = 3 5>3
                //arr[j] =5 arr[j+1] = 5 5>8
                temp = arr[j]; //temp = 5
                arr[j] = arr[j+1]; //arr[j] = 3
                arr[j+i] = temp; //arr[j+1] = 5
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}