#include"student.h"
void student::setdata(string  name,int age,string usn){
    this-> name=name;
    this-> age=age;
    this-> usn=usn;
}
void student::display(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"usn : "<<usn<<endl;
}