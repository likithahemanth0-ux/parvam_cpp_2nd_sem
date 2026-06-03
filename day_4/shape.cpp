#include<iostream>
using namespace std;
class shape{
 public:
 virtual double area()=0;
};
class circle : public shape{
private:
    double radius;
public:
    circle(double r){
        radius=r;
    }
    double area(){
        return 3.14*radius*radius;
    }
};
class rectangle : public shape{
private:
    double length,breadth;
public:
    rectangle(double l, double b){
        length=l;
        breadth=b;
    }
    double area(){
        return length*breadth;
    }
};int main(){
    circle c(5);
    rectangle r(4,6);
    cout<<"circle area : "<<c.area() <<endl;
    cout<<"reactangle area : "<<r.area() <<endl;
    return 0;
}