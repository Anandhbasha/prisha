#include <iostream>
using namespace std;
class Father{
    public:
    void money(){
        cout <<"Father Money"<<endl;
    }
};
class Mother{
    public:
    void love(){
        cout <<"Moms Love"<<endl;
    }
};

class child :public Father,public Mother{

};

int main(){
    child ch;
    ch.money();
    ch.love();
    return 0;
}