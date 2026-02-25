#include <iostream>
#include <string>
using namespace std;



class Student {
    public:
    string name;

    Student(string n){
        name = n;
    };
    void display(){
        cout << "Name:" << name << endl;
    }
};
int main(){
    Student s1("Arun");
    s1.display();
    return 0;
}