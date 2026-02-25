#include <iostream>
using namespace std;
#include <string>

class parent{
    public:
    virtual void show(){
        cout <<"Parent show" <<endl;
    };
};
class child:public parent{
    public:
    void show(){
        cout << "child show" <<endl;
    }
};

int main(){
    parent* ptr;
    child obj;

    ptr = &obj;
    ptr->show();
    return 0;
}