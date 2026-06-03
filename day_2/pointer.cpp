#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"Value of a "<<a<<endl;
    cout<<"Address of a "<<&a<<endl;
    cout<<"Value of a using string ptr "<<*ptr<<endl;
    cout<<"Address of the pointer using pointer "<<&(*(ptr))<<endl;
}