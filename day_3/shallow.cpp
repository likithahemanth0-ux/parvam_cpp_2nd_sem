 #include<iostream>
 using namespace std;
 class student{
    public:
        int*age;
        student(int age){
            this->age=new int;
            *(this->age)=age;
                 
        }
 };
 int main(){
    student s1(24);
    cout<<"age : "<<*(s1.age)<<endl;//24 
    student s2(&s1);
    cout<<"age: "<<*(s2.age)<<endl;
    *(s1.age)=30;
    cout<<"age of s1
    cout<<"age : "<<shallow copy(copying the address)
     cout<<"age : "<<*(s1.age)<<endl;//24 
 }