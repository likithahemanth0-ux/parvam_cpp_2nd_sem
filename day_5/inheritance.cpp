#include<iostream>
using namespace std;
class animal{
    public:
    string name;
    void eat(){
        cout<<name<<" is eating."<<endl;
    }
    
        void walk(){
        cout<<name<<" is walking"<<endl;
    }
};
class dog:public animal{
    public:
    void sleep(){
        cout<<name<<" is sleeping"<<endl;
    }
};
int main()
{
    dog dog1;
    dog1.name="Dog";
    dog1.eat();
    dog1.walk();
    dog1.sleep();
}