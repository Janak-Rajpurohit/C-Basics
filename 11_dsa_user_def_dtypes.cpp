/*
user def dtypes --> structure , enum , union
*/


#include<iostream>

using namespace std;

// structure -- array but elements are not of same dtypes
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

//Union --> we can use only 1 dtype from below 3 
// helps wih memory management , cpu  will allocate 4 bytes in which any one will declared
union money
{
    int rice;
    char car;
    float pounds;
};



int main(){
    /*
    // before typedef { code } ep
    // struct employee janak;    // janak is dtype now 
    // struct employee raj;      // raj is dtype
    // after typedef { }ep (struct employee = ep)
    ep janak;
    ep raj;
    janak.eId=1;
    janak.favChar = 'j';
    janak.salary=10000.0;
    cout<<janak.salary<<endl;
    cout<<janak.eId<<endl;
    cout<<janak.favChar<<endl;
    */
   
//    union money m1;
//    m1.rice=34;
//    m1.car='c';  // if not m1.rice --> 34 else 99
//    cout<<m1.rice<<endl;
//    cout<<m1.car<<endl;
   // memory is  shared among them  rice get overwritten after car 
   

  // allocates  0,1,2...so_on to bf , lunch , dinner 
  enum meal{breakFast,lunch,dinner};
  cout<<breakFast<<endl;  // -->0
  cout<<lunch<<endl;      // -->1
  cout<<dinner<<endl;     // -->2

  // meal is data type now
  meal m1 = lunch;
  cout<<m1<<endl;
  cout<<(m1==1);



    return 0;
}