#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[20];
    float marks;
};
int main(){
    struct  Student s1 = {1,"Prisa",95.5};
    struct  Student s2;
    FILE *fp;
    fp = fopen("student.dat","wb");
    if(fp==NULL){
        printf("File Error \n");
        return 1;
    }
    fwrite(&s1,sizeof(struct Student),1,fp);
    fclose(fp);
    fp = fopen("student.dat","rb");
    fread(&s2,sizeof(struct Student),1,fp);
    fclose(fp);

    printf("ID: %d \n Name: %s\n Marks: %2f\n",s2.id,s2.name,s2.marks);
    return 0;
    
}
