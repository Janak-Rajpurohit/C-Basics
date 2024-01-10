# include <iostream>
# include <iomanip>  // included for setw manipulator

using namespace std;

int main()
{
    /*
    // Contsant  (const) for making constant var 
    // int a=34;
    // a=45;       // changing value

    const int a=40;
    // a=32;       // can't change value (error)
    */

   
   //Manipulators (endl, setw)
   int a=3, b=78,c=1233 ,d=123456;
   //without setw
   cout<<"The value of a is "<<a<<endl;
   cout<<"The value of b is "<<b<<endl;
   cout<<"The value of c is "<<c<<endl;
   cout<<"The value of d is "<<d<<endl;
   //with setw
   cout<<"The value of a is "<<setw(4)<<a<<endl;
   cout<<"The value of b is "<<setw(4)<<b<<endl;
   cout<<"The value of c is "<<setw(4)<<c<<endl;
   cout<<"The value of d is "<<setw(4)<<d<<endl;
   // setw gives 4 bits space
   

  //Operator precedence
   a=3,b=4;
   c=a*5+b;  // multiply first then add & associativite is left to right for addition
  cout<<c<<endl;


    return 0;
}

