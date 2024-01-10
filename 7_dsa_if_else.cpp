#include <iostream>
using namespace std;

int main(){
    int age;              // dec var age 
    cout<<"Tell me your age"<<endl;
    cin>>age;             // take input age

    /*
    //SELECTION CONTROL STRUCTURE if-else
    // 1st cond, (AND)-->both should be true 
    if ((age<18)&&(age>=1)){ 
        cout<<"Sorry you cannot come to party"<<endl;
    }
    //2nd cond
    else if (age==18){
        cout<<"You are still kid you can have soft drinks"<<endl;
    }
    //3rd cond
    else if (age<1){
        cout<<"PLEASE enter the VALID age."<<endl;
    }
    // else it will execute
    else {
        cout<<"You are welcome"<<endl;
    }
    // any one of above 3 cond will excute
    */

   //SELECTION CONTROL STRUCTURE switch case
   switch (age)
   {
   case 18:          // it will exe this and break 
    cout<<"you are 18"<<endl;
    break;           // if no break ,then it will print all the cases       
   case 89:
   cout<<"You are too old for this"<<endl;
   break;

   default:
   cout<<"No more special cases"<<endl;
    break;
   } 
    return 0;
} 

