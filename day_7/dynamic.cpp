#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"a:"<<endl;
    int*ptr=new int;
    *ptr = 30;
    cout<<"ptr:"<<endl;
    return 0;
}