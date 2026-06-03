#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    string color;
    shape(string color):color(color){

    }
    virtual void area()=0;
    virtual void perimeter()=0;
    void displaycolor(){
        cout<<"Color:"<<color<<endl;

    }
    ~shape(){
        cout<<"Destroyed"<<endl;

    }
};
class circle:public shape{
    public:
    double radius;
    circle(double r,string c):shape(c), radius(r){
    cout<<"Circle constructor"<<endl;
    }
    void area()override{
        cout<<"Area of a circle:"<<3.14*radius*radius<<endl;
    }
    void perimeter()override{
        cout<<"Perimeter of a circle:"<<2*3.14*radius<<endl;
    }
    ~circle(){
        cout<<"Destroyed"<<endl;
    }
};
void displaydetails(shape *s)
{
    s->displaycolor();
    s->area();
    s->perimeter();
}
int main()
{
    shape *s1=new circle(12,"red");
    shape *s2=new circle(5,"blue");
    displaydetails(s1);
    displaydetails(s2);
    delete s1;
    delete s2;
    return 0;
}
