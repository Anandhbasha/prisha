#include <iostream>
#include<string>
using namespace std;
int main(){
    std::cout<<"Hello C++";
    string name = "userName";
    cout<<name;
    cout<<"length:" <<name.length();
    cout<<"length:" <<name[0];
    name.append("is Arun");
    cout<<"length:" <<name <<endl;
    cout << name.substr(0,4);
    return 0;
}