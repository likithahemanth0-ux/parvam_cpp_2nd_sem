#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    student(string name,int age){
        this->name=name;
        this->age=age;
        cout<<"default constructor is called"<<endl;
    }
    student(){
         this->name="unknown";
        this->age=0;
        cout<<"default "<<endl;
    }
    
};
int main(){
    //random values
    student s1("Sara",21);
    cout<<"Student name is "<<s1.name<<endl;
    cout<<"Student age is "<<s1.age<<endl;
    return 0;
}