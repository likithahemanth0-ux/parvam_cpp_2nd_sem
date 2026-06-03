#include<iostream>
#include<string>
using namespace std;
class animal{
    protected:
       string name;
};
class dog: public animal{
    public:
        void setdog(string name){
            this-> name=name;
        }
          void display(){
            cout<<"Dog's name is "<<name<<endl;
          }
};
int main(){
    dog dog1;
    dog1.setdog("Buddy");
    dog1.display();
    return 0;
}