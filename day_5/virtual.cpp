#include<iostream>
#include<string>
using namespace std;
class grandfather{
    public:
    void property(){
        cout<<"land"<<endl;
    }
};
class father:public grandfather{
    public:
    void business(){
        cout<<"Shop"<<endl;
    }
};
class child:public father{
    public:
    void study(){
        cout<<"School"<<endl;
    }
};
int main()
{
    child child1;
    child1.property();
    child1.business();
    child1.study();
    return 0;
}