#include<iostream>
#include<string>
using namespace std;
class complex{
    public:
        double real;
        double img;
        complex(double r, double i) : real(r), img(i){
        }

        complex operator -(complex c){
            return complex(real-c.real,img-c.img);
        }

};
int main(){
    complex c1(20,10), c2(20,40);
    cout<<c1.real<<" -"<<c1.img<<"i"<<endl;
    cout<<c2.real<<" - "<<c2.img<<"i"<<endl;
    complex c3 = c1 - c2;
    cout<<c3.real<<" - "<<c3.img<<"i"<<endl;
    return 0;
}