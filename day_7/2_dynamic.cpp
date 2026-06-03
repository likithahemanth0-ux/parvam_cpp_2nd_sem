#include<iostream>
using namespace std;
int main(){
    cout<<"enter a size of a array: ";
    int size;
    cin>>size;
    int*ptr = new int[size];
    cout<<"Enter the elements of an array: ";
for(int i = 0; i < size; i++){
    cin>>ptr[i];
}

cout<<"Elements: ";
for(int i = 0; i < size; i++){
    cout<<ptr[i]<<" ";
}
cout<<endl;

delete[] ptr;
ptr = nullptr;

return 0;
}