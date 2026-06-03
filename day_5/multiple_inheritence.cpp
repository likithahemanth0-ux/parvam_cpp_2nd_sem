#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    void v1(){
        cout<<"Vehicle"<<endl;
    }
};
class mother{
    public:
    void kindness(){
        cout<<"Affection"<<endl;
    }
};
class child:public mother,public father{
    public:
    void study(){
        cout<<"Smart"<<endl;
    }
};
int main()
{
    child child1;
    child1.ability();
    child1.kindness();
    child1.study();
    return 0;
}