#include<iostream>
using namespace std;
class student{
    private:
     string name;
     int age;
    public:
        void setname(string n){
            name=n;

    }
    void setage(int a){
        if(a>0&&a<150){
            age=a;
        }
        else{
            cout<<"Invalid age<<endl"
        }
    string getname(){
        return name;
    
    
    }
    int getage(){
        return age;
    }
    
};
int main(){
    student s1;
    s1.setname("Maya");
    s1.setage(21);
    cout<<"Student name is"<<s1.getname()<<endl;
    cout<<"Student age is"<<s1.getage()<<endl;
}