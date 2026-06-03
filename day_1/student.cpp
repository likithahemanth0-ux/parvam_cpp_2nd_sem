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
}

{
    //s2
     s1.name="sara";
    s1.age=22;
    s1.usn=123;
    //print values
    cout<<"student 1 details:"<<endl;
    cout<<"Age:"<<s2.name<<endl;
    cout<<"usn:"<<s2.usn<<endl;
    s2.issleeping();
}
 {

 
    //s3
    s3.name="MAYA";
    s3.age=25;
    s3.usn=123;
    //print values
    cout<<"student 1 details:"<<endl;
    cout<<"Age:"<<s3.name<<endl;
    cout<<"usn:"<<s3.usn<<endl;
    s3.issleeping();
    return 0;
 }
}