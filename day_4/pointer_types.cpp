#include<iostream>
using namespace std;
int main(){
    int x = 10;
    double y = 3.14;
    char c = 'A';
    int*intptr = &x;
    double*doubleptr = &y;
    char*charptr = &c;
    cout<< "size of int pointer: "<<sizeof(intptr)<<"bytes" << endl;
    cout<< "size of double pointer: "<<sizeof(doubleptr)<<"bytes" << endl;
    cout<< "size of char pointer: "<<sizeof(charptr)<<"bytes" << endl;
    return 0;

}