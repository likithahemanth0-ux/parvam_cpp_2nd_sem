#include<iostream>
using namespace std;
class bankaccount{
private:
    double balance;
public:
    bankaccount(double b){
        balance = b;
    }
    friend void displaybalance(bankaccount acc);
};
void displaybalance(bankaccount acc){
    cout<<"Balance:"<<acc.balance <<endl;
}
int main()
{
    bankaccount b1(5000);
    displaybalance(b1);
    return 0;
}