#include <iostream>
#include<string>
using namespace std;
int main(){
    int*ptr = new int(10);
    cout<<"value1:"<<*ptr<<endl;

int *ptr2 = new int(20);
int **ptr3 = &ptr2;
cout << "value2: " << *ptr2 << endl;
cout << "value2: " << **ptr3 << endl;
int *ptr4 = new int[3]{1,2,3}; 
cout << "value3: " << ptr4[2] << endl;
cout << "value3: " << *(ptr4+2) << endl;
delete ptr;
delete ptr2;
delete ptr3;
delete[] ptr4;
return 0;
}