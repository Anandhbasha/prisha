#include <iostream>
#include <string>
using namespace std;

class OverLoading{
    public:
    int add (int a,int b){
        return a+b;
    };
    float add (float a, float b){
        return a+b;
    }    
};


int main(){
    OverLoading obj;
    cout << obj.add(10,20) << endl;
    cout << obj.add(10.2f,20.5f) << endl;
    return 0;

}



