#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class cat:public animal{
    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};
class pet:public dog,public cat{
    public:
    void play(){
        cout<<"playing"<<endl;
    }
};
int main(){
    pet p1;
    p1.dog::eat();
    p1.cat::eat();
    p1.bark();
    p1.meow();
    p1.play();
    return 0;
}