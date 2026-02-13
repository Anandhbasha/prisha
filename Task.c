#include <stdio.h>
int main(){
    int SSLC = 75;
    int HSC = 78;
    int UG = 65;

    if(UG>=75){
        if(HSC>=75){
            if(SSLC>=70){
                printf("He is Eligible for Interview");
            }else{
                printf("He is Rejected Based SSLC Mark");
            };
        }else{
            printf("He is Rejected Based HSC Mark");
        };
    }else{
        printf("He is Rejected Based UG Mark");
    };
    return 0;
}