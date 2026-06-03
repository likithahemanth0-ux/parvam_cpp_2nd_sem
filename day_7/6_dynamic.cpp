#include<iostream>
#include<string>
using namespace std;
int maxint(int a, int b){
    return (a>b)?a:b;
}
double maxdouble(double a, double b){
    return (a>b)?a:b;
}
template<typename T>
T maxtwo(T a,T b){
    return (a>b)?a:b;
}
int main()
{
    cout<<maxint(30,10)<<endl;
    cout<<maxdouble(30.30,10.30)<<endl;
    cout<<maxtwo(1,2)<<endl;
    cout<<maxtwo(20.50,35.80)<<endl;
    cout<<maxtwo("hi","abc")<<endl;

}