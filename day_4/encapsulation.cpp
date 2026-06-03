#include<iostream>
using namespace std;
class bankaccount{
    private:
        double balance;
    public:
        void deposit(double amount){
            if(amount>0)
            {
                balance=balance+amount;
                cout<<"Account deposited successfully!"<<endl;

            }
            else
            {
                cout<<"Invalid deposit amount!"<<amount<<endl;
            }
        
        }
    double getbalance()const{
        return balance;
    }
};
int main(){
    bankaccount account;
    account.deposit(189898988779);
    cout<<"Current balance:"<<fixed<<account.getbalance()<<endl;
    return 0;
}