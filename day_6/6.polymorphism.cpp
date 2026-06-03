#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void eat() final{
            cout<<"Animal is eating"<<endl;
        }
        virtual void walking() final{
            cout<<"Animal is walking"<<endl;
        }
};

class Dog : public Animal{
    public:
        void eat()override{
            cout<<"Dog is eating"<<endl;
        }
        void walking()override
        {
            cout<<"Dog is walking"<<endl;
        }
};

int main()
{
    Dog d1;
    Animal *a1;
    a1=&d1;
    a1->eat();
    a1->walking();
    return 0;
}