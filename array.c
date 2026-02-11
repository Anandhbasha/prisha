#include <stdio.h>
int main(){
    int arr[6] = {10,20,30,40,50,80}; //index  ->10=0 ,20=1,30=2,40=3,50=4 ,80=5
    int lengthofarray = sizeof(arr)/sizeof(arr[0]); //6/
    // arr[0] = 10
    // arr[1] = 20
    //arr[2] = 30

    // sizeof = int 4bytes
    //6*4=24/4 = 6

    for(int i=0;i<lengthofarray;i++){ //0 //1<6 
        printf("%d \t",arr[i]); //10 //20 80
    }
    
    return 0;
}