#include <stdio.h>
struct Students{
    int id;
    char name[50];
    int totalMaks;
    float percentage;
};

int main(){
    struct Students s1;
    s1.id=101;
    sprintf(s1.name,"Ajay");
    s1.totalMaks=423;
    s1.percentage=84.63;
    // display
    printf("ID: %d \n",s1.id);
    printf("name %s \n",s1.name);
    printf("Total: %d \n",s1.totalMaks);
    printf("Percentage: %.2f \n",s1.percentage);
    struct Students s2;
    s2.id=102;
    sprintf(s2.name,"Arun");
    s2.totalMaks=385;
    s2.percentage=84.63;
    // display
    printf("ID: %d \n",s2.id);
    printf("name %s \n",s2.name);
    printf("Total: %d \n",s2.totalMaks);
    printf("Percentage: %.2f \n",s2.percentage);
    return 0;
}