#include<iostream>
using namespace std;
class point{
    public:
        int x;
        point(int abc):x(abc){
        cout<<"Construtor is called and the value of x is "<<x<<endl;
    }
};
int main()
{
    point p1(10);
    cout<<"Value of x is "<<p1.x<<endl;
return 0;
}