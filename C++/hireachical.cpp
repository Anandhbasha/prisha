#include <iostream>
using namespace std;

class Father{
    public:
    void house(){
        cout << "Parents House" <<endl;
    }
};
class son : public Father{

};
class daughter: public Father{

};
int main(){
    son s;
    daughter d;
    s.house();
    d.house();
    return 0;
}