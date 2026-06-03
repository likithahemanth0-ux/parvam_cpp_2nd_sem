#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        int age;
        Student(string n, int a) : name(n),age(a){
        }
};

int main(){
    
    Student s1("pavan",23);
    cout<<"name: "<<s1.name<<endl;
    cout<<"age: "<<s1.age<<endl;
    
    Student* s2 = new Student("darshan",24);
    cout<<"name:"<<s2->name<<endl;
    cout<<"age:"<<s2->age<<endl;
    delete s2;
    return 0;
}