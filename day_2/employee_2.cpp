#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    string name;
    int emp_id;
    int salary;
    employee(string name,int emp_id,int salary){
        cout<<"contructor is called"<<endl;
        this -> name=name;
        this -> emp_id=emp_id;
        this -> salary=salary;

    }
};
int main(){
    employee s1("Nala",101,45000);
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Employee Id:"<<s1.emp_id<<endl;
    cout<<"Salary:"<<s1.salary<<endl;
    return 0;
}