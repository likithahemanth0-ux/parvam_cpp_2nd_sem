#include<iostream>
#include<string>
using namespace std;
template<typename T,typename U>
class student{
    public:
        T name;
        U age;
        student(T n,U a):name (n),age(a){}
        void display(){
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
int main()
{
    student<string, int >s1("Pavan",23);
    student<double , bool> s2(20.45,true);
    s1.display();
    s2.display();
    return 0;
}