#include<iostream>
using namespace std;
class student{
    private:
        int age;
    public:
        student(int age){
            this->age=age;

        }
    void show(){
        cout<<"age:"<<this->age<<endl;
    }
};
int main()
{
    student s1(22);
    s1.show();
    return 0;
}