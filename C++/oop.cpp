// #include <iostream>
// using namespace std;
// #include <string>

// // void bike(string name,float milage,int noofWheels,string color){
// //     cout << name << endl;
// //     cout << milage << endl;
// //     cout << noofWheels << endl;
// //     cout << color << endl;
// // }

// int main(){
//     // bike("yuga",40.5,2,"red");
//     // bike("unicorn",40.5,2,"black");
//     // bike("unicorn",40.5,2,"black");

//     string bike1name = "Yuga";
//     string bike2name = "unicorn";
//     string bike3name = "shine";
//     string bike3name = "activa";
//     int bike1mailage = 20;
//     return 0;
// }
// public ->
// protected
// private
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    
    void display(){
        cout << name << " "<< age;
    }

    
};

int main(){
    Student s1;
    s1.name = "Prisa";
    s1.age=22;
    s1.display();
    Student s2;
    s2.name = "Ajay";
    s2.age=23;
    s2.display();
    s1.display();
    return 0;
}
