#include<iostream>

using namespace std;

// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }

// Function Prototype
// type function-name(arguments);
// the body is written after main , the prototype tells compiler that thier is function sum which takes num1 , num2 arguments 
// hence compiler is ready for that doesnt give error

// int sum(int a , int b);
//OR
int sum(int , int );
void g(void);          // if not it will err void means it is taking and returning nothing

int main(){
    int num1 ,num2;
    cout<<"enter num1 "<<endl;
    cin>>num1;
    cout<<"enter num2 "<<endl;
    cin>>num2;
    // num1 and num2 -- actual parameters (what we are passing)
    cout<<"The sum is "<<sum(num1,num2);

    return 0;
}


int sum(int a, int b){
    // a and b are formal parameters (which are taking from actual parameters)
    int c=a+b;
    return c;
}

void g(){
    cout<<"Hello GM"<<endl;
}
