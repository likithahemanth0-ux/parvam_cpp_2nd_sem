#include<iostream>
#include<string>
using namespace std;
class room{
    public:
    string name;
    room(string name):name(name){
        cout<<"room created:"<<name<<endl;
    }
    ~room(){
        cout<<"room destroyed: "<<name<<endl;
    }
};
int main(){
    room room1("room1");
    room room2("room2");
    room room3("room3");
    return 0;
}
