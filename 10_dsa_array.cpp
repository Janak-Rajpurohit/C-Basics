#include<iostream>

using namespace std;

int main(){
    /*
    // Array -- collection of similar items stored in contigous block of memory
    int marks[4]={23,45,56,89};   // array
    int mathMarks[4];
    mathMarks[0]=79;
    mathMarks[1]=85;
    mathMarks[2]=65;
    mathMarks[3]=23;
    marks[0]=100; //changing item
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    */
   /*
   int marks[4]={23,45,56,89};
   for (int i = 0; i < 4; i++)
   {
    cout<<marks[i]<<endl;
   }
   */
   //pointers in array
   // marks (variable is pointer)
   int marks[4]={23,45,56,89};
   int* b=marks;   //pointer b for array marks
   cout<<b;     // address of 0 index
   cout<<"The value "<<*b<<endl;

   cout<<b+1;
   cout<<"The value "<<*(b+1)<<endl;   // index 1 element



    return 0;
}