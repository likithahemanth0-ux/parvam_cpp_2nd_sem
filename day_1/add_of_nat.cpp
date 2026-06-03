#include<iostream>
using namespace std;
int natural(int n);
int main(){
    int a,i;
    cout<< "enter a number";
    cin >> a;
    cout << natural(a)<<endl;
    return 0;
}
int natural(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}
