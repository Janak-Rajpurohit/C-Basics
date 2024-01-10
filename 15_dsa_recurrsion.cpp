#include<iostream>

using namespace std;
// recurrsion -- function call itself like loop

int fact(int n){
    if (n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int fibb(int n){
    if (n<2){
        return 1;
    }
    return fibb(n-2)+fibb(n-1);
}

int main(){
    int a ;
    cout<<"Enter the num "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<fact(a);
    cout<<"The term in fibbonaci series at position  "<<a<<" is "<<fibb(a)<<endl;
    return 0;
}