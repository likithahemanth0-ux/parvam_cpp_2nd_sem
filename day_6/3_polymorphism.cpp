#include<iostream>
#include<string>
using namespace std;


class Calculation {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b){
        return a+b;
    }
    double add(double a, int b){
        return a+b;
    }
    string add(string a,string b){
        return a+b;
    }
};
int main() {
    Calculation c1;
    
    cout << "Two numbers: " << c1.add(10, 20) << endl;
    cout << "Three numbers: " << c1.add(10, 20, 30) << endl;
    cout<<"Addition of double value:"<<c1.add(4.5,8.9)<<endl;
    cout<<"Addition of double and int value:"<<c1.add(4.5,8)<<endl;
    cout<<"Concatination of strings:"<<c1.add("hello","world")<<endl;
    return 0;
}