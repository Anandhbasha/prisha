#include <iostream>
using namespace std;
#include <string>

class BankAccount{
    private:
        int balance=500;
    public:
    void setBalance(int b){
        balance=balance+b;
    }
    int getBalance(){
        return balance;
    }
};
int main(){
    BankAccount acc1;
    acc1.setBalance(1000);
    cout <<"Avalible balance:" <<acc1.getBalance();
    return 0;
}