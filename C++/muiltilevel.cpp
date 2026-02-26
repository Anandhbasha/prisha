#include <iostream>
using namespace std;


class GrandPa{
    public:
        void display(){
            cout << "This is GrandPa Home" << endl ;
        }
};
class father:public GrandPa{

};
class son:public father{

};
int main(){
    son s;
    s.display();
    return 0;
}