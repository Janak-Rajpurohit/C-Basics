/*
loops - FOR LOOP , WHILE LOOP , DO WHILE LOOP
*/

#include <iostream>
using namespace std;

int main(){
    // For Loops 
    // dec var i , i<20 cond (no of itretions), increments by 1
    //1. dec
    // then loop --> condition --> increment 
    /*
    for (int i = 0; i < 20; i++)
    {
        cout<<i<<endl;
    }
    */
    
    //While loop syntax
    // while(condition)
    // {
    //     statements;
    //     increments
    // }
    /*
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    */

   //Do While 
   // first statement is exe then condition  is checked
   // if the condition is false loop will exe aleast one time
   int i=1;
   do{
    cout<<i<<endl;
    i++;
   }while(i<=40);   //do  while has ; after condition

    return 0;
}
