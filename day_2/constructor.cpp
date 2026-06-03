#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    string email;
    student(string name,int roll,string email){
        cout<<"contructor is called"<<endl;
        this -> name=name;
        this -> roll=roll;
        this -> email=email;

    }
};
int main(){
    student s1("pavan",101,"someone@gmail.com");
    cout<<"name:"<<s1.name<<endl;
    cout<<"roll:"<<s1.roll<<endl;
    cout<<"email:"<<s1.email<<endl;
    return 0;
}