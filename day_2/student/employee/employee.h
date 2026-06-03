#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
        string name;
        int age;
        string emp_id;
        void setdata(string name,int age,string emp_id);
        void display();
        
};

#endif