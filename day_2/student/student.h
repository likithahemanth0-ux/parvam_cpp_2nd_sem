#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
        string name;
        int age;
        string usn;
        void setdata(string name,int age,string usn);
        void display();
        
};

#endif