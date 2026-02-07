#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int main(){
    int res1 = add(10,20);
    printf("%d sum of Two:",res1);
    int res2 = add(40,50);
    printf("%d \n sum of Two:",res2);
    return 0;
}