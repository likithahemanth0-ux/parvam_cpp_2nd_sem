#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int*ptr=&x;
    cout<<"value of x is : "<< x << endl;
    cout<<"address of x is : "<< &x << endl; 
    cout<<"pointer value is : "<< ptr << endl;
    cout<<"value using pointer is : "<< *ptr << endl;
    *ptr = 50;
     cout<<"updated x value is : "<< x << endl;
     return 0;

}   