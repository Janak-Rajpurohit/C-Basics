#include<iostream>

using namespace std;

int main(){
    // pointer --> it is a dtype which holds address of other dtypes
    int a=3;
    int* b = &a;    // b is pointer var which hold address of a
    // & --> (address of) operator
    cout<<"The adress of a is "<<b<<endl;
    cout<<"The adress of a is "<<&a<<endl;

    // * --> (value at)derefference operator
    cout<<"The value at adress of a is "<<*b<<endl;  //access val through address

    // pointer to pointer store address of pointer
    int** c=&b;
    cout<<"The adress of pointer b is "<<c<<endl;
    cout<<"The value at c is "<<*c<<endl;
    cout<<"the value at adress c is "<<**c<<endl;
    return 0;
    
}