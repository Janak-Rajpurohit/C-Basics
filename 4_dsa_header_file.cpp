


//there are two types of header file
//1. sys header files: It comes with the compiler
#include <iostream>
// 2. User def headder file : It is written by programmer
//#include "This.h"  //made by me

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in C++"<<endl;    // (endl == \n) gives newline
    cout<<"newline"<<endl;
    //Arthemetic operator
    cout<<"The val of a+b is "<<a+b<<endl;
    cout<<"The val of a-b is "<<a-b<<endl;
    cout<<"The val of a*b is "<<a*b<<endl;
    cout<<"The val of a/b is "<<a/b<<endl;  //-> 0 (numbers are ignored after decimal)
    cout<<"The val of a%b is "<<a%b<<endl;  //-> 4 (gives remainder after one division) 
    cout<<"The val of a++ is "<<a++<<endl;  //-> 5 (a=a+1)
    cout<<"The val of a-- is "<<a--<<endl;  //-> 4 (a=a-1) at latest a=5
    cout<<"The val of ++a is "<<++a<<endl;  //-> 5 (a=a+1) but first increament and then print 
    cout<<"The val of --a is "<<--a<<endl;  //-> 4 but first increament then print
    cout<<endl; //space
    //Assignment Operators  -> use to assg operators
    // int a=3,b=9;
    // char d="d"

    //comparision operators
    cout<<"This are comparisions"<<endl;
    cout<<"The value of a==b is "<< (a==b) <<endl;
    cout<<"The value of a>b is "<< (a>b)<<endl;
    cout<<"The value of a<b is "<< (a<b)<<endl;
    cout<<"The value of a!=b is "<< (a!=b) <<endl;
    cout<<"The value of a>=b is "<< (a>=b) <<endl;
    cout<<"The value of a<=b is "<< (a<=b) <<endl;
    cout<<endl;

    //logical operator
    cout<<"This are logical operators"<<endl;
    // and -- && (both should be true to make it true)
    // or -- || (one one of them should be true to make it true)
    // we know a=4 , b=5
    //write whole logic in bracket otherwise it will give err
    cout<<((a==b)&&(a<b))<<endl;  // false && true --> False
    cout<<((a==b)||(a<b))<<endl;  // false || true --> true
    // not operator reverse the out true --> false or vice versa
    cout<<(!(a==b))<<endl;   // !(false) --> true

     
    return 0;
}

