#include <iostream>

using namespace std;
int c=45;
int main()
{
    /*
    int a,b,c;
    cout<<"Welcome";
    cout<<"Enter the val of a >> ";
    cin>>a;
    cout<<"Enter the val of b >> ";
    cin>>b;

    c=a+b;
    cout<<"The sum is "<< c <<endl; 
    cout<<"The global sum is "<<::c;     //for accesing global c 
    */

   /*
   float d=43.4f; //f --> float ootherwise compiler by default consisder double
   long double e=34.4l;   // l-> long double
   cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;  // default it take double --> 8
   cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;  // f- float
   cout<<"The size of 34.4d is "<<sizeof(34.4d)<<endl;  // d--double
   cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;  // l --long double
   */

  //REFFERENCE VARIABLE
  //saurav andurkar -> saurav -> patagobi
  float x=455;
  float &y=x;   //  var is only one but name is diff
  // x=50;  //if x is change y is  also changed

  cout<<x<<endl;
  cout<<y<<endl;

  // TYPE CASTING   (data type conversion)
  int a=45;
  float b=45.5;
  cout<<"the value of a is "<<(float)a<<endl;   // converting into float
  cout<<"the value of b is "<<(int)b<<endl;   // converting into int
  // (float)a = float(a) both are same

  int c= int(b);  //converting b into int
  cout<<"C is integer form of b > "<<c; 

    return 0;
}


