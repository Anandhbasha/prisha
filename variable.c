#include <stdio.h>
int main(){
    int age = 20;
    float salary = 25000.50;
    char grade = 'A';
    double balance = 2000000.65;
    long employeeID = 782222;
    printf("Age: %d\n",age);
    printf("Salary %.2f \n",salary);
    printf("Grade: %c \n",grade);
    printf("balance: %.2lf \n", balance);
    printf("employeeId: %ld \n", employeeID);
    return 0;
}