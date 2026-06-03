#include <iostream>
using namespace std;

class Test {
private:
    int* ptr;
public:
    Test(int value) {
        ptr = new int(value);
    }

    Test& operator=(const Test& other) {
        cout << "Assignment operator called" << endl;

        // SELF-ASSIGNMENT CHECK — the fix
        // if (this != &other) {
        //     delete ptr;
        //     ptr = new int(*other.ptr);
        // }

        // WITHOUT check (problem version):
        delete ptr;           // deletes memory
        ptr = new int(*other.ptr); // other.ptr is now dangling!

        return *this;
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Test t1(10);
    t1 = t1;   // Self-assignment — causes undefined behavior without check
    t1.display();
    return 0;
}