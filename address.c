#include<stdio.h>
void square(int *x){
    *x = (*x)*(*x);
}
int main(){
    int num= 5;
    square(&num); 
    printf("%d",num);
}