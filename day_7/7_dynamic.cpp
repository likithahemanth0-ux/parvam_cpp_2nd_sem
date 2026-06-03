#include<iostream>
#include<string>
using namespace std;
template<typename T>
T addtwo(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<addtwo(10,20)<<endl;
    cout<<addtwo(10.20,20.10)<<endl;
    string str1="hello";
    string str2="world";
    cout<<addtwo(str1,str2)<<endl;
    return 0;
}