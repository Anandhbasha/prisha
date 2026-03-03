// #include <stdio.h>
// #include<stdlib.h>

// // int main(){
// //     int *ptr;
// //     ptr = (int*) malloc(5*sizeof(int));
// //     return 0;
// // }

// // 5 integer got memory allogation

// int main(){
//     int n;
//     printf("Enter the Elements:");
//     scanf("%d",&n);
//     int *arr;

//     arr = (int*) malloc(n*sizeof(int));

//     for(int i=0;i<n;i++){
//         scanf("%d",arr[i]);
//     }
//     printf("Entered value:\n");
//     for(int i=0;i<n;i++){
//         printf("%d",&arr[i]);
//     }
//     free(arr);
//     return 0;
// }


// #include <stdio.h>

// int main(){

//     int a=0;
//     while (a<=10)
//     {
//         if(a==5){
//             break;
//         }
//         a=a+1;
//         printf("%d",a);
//     }
    
    
//     return 0;

// }


#include <stdio.h>

int main(){

    int a=0;
    while (a<=10)
    {
        if(a%2==0){
            a=a+1;
            continue;
        }
        else{
           a=a+1;
            printf("%d",a);
        }
    }
    
    
    return 0;

}