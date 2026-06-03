#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
      int accountnumber;
      double balance;
    public:
      int getaccountnumber(){
        return accountnumber;
    }
    void setaccountnumber(int accnum){
        this -> accountnumber = accnum;
    }
    double getbalance(){
        return balance;
    }
    void setbalance(double bal){
        this -> balance=bal;
    }
};
int main()
{
    bankaccount acc1;
    acc1.setbalance(10000);
    acc1.setaccountnumber(12345);
    cout<<"Account Number : "<<acc1.getaccountnumber()<<endl;
    cout<<"balance : "<<acc1.getbalance()<<endl;
    return 0;
}