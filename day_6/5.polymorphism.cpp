#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void eat(){
            cout<<"Animal is eating"<<endl;
        }
};

class Dog : public Animal{
    public:
        void eat(){
            cout<<"Dog is eating"<<endl;
        }
};

class Cat : public Animal{
    public:
        void eat(){
            cout<<"Cat is eating"<<endl;

        }
};
int main()
{
    Dog d1;
    Cat c1;
    Animal *a1;
    a1=&d1;
    a1->eat();
    a1=&c1;
    a1->eat();
    return 0;
}