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
};

int main() {
    Calculation c1;
    
    cout << "Two numbers: " << c1.add(10, 20) << endl;
    cout << "Three numbers: " << c1.add(10, 20, 30) << endl;
    
    return 0;
}