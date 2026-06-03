#include<iostream>
#include<string>
using namespace std;
//class will not take any memory
class student{
    public: 
        //state
        string name;
        int age;
        int usn;
        //behavior
        void issleeping(){
            cout<<name<<" is sleeping."<<endl;
        }

};
int main()
{
    //object --> object will take a memory,it is instence of a class
    student s1,s2,s3;
    //assaign __values
    s1.name="John";
    s1.age=23;
    s1.usn=123;
    //print values
    cout<<"student 1 details:"<<endl;
    cout<<"Age:"<<s1.name<<endl;
    cout<<"usn:"<<s1.usn<<endl;
    s1.issleeping();

    return 0;
}