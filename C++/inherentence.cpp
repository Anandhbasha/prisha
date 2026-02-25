#include<iostream>
using namespace std;
#include <string>

class Dad{
    public:
    void house(){
        cout << "Dads Home";
    };
};

class son : public Dad{
    
};
int main(){
    son s;
    s.house();
    return 0;
}