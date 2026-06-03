#include<iostream>
#include<string>
using namespace std;

class bankaccount{
    public:
        string accountholdername;
        void displayaccountholdername(){
            cout<<"Account holder name:"<<accountholdername<<endl;
        }
};
int main()
{
    bankaccount acc1;
    acc1.accountholdername="pavan";
    acc1.displayaccountholdername();
    return 0;
}
