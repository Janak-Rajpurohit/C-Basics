#include<iostream>

using namespace std;

int sum(int a , int b ){
    int c=a+b;
    return c;
}
//this will  not swap a and b , it will copy val doesn't change actual ones

void  swap(int a  ,int b){
    int temp =a;
    a=b;
    b=temp;
}
// this pointer method , we pass  address, then we will change value at address *a  
// call by reference by pointers
void  swapPointer(int* a  ,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using refff var
void  swapRefferenceVar(int &a  ,int &b){
    int temp = a;
    a = b;
    b = temp;
}
/*return by refference 
int & swapRefferenceVar(int &a  ,int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
} */

int main(){
    int  a=4 ,b=5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    swap(a,b);
    cout<<"after swap"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"after Pointer swap"<<endl;
    // call by reference by pointers
    // swapPointer(&a,&b);
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    cout<<"after Reff var"<<endl;
    swapRefferenceVar(a,b);
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    
    return 0;
}