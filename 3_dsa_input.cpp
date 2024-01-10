# include <iostream>


using namespace std;

int main()
{
    int num1 ,num2;
    //taking num1 value    
    cout<<"Enter the value of num1:\n";    // << this is  Insertion operator
    cin>>num1;       // >>  this is Extraction operator

    //taking num2 value
    cout<<"Enter the num2 value:\n";
    cin>>num2;

    cout<<"The sum is "<< num1+num2;
    return 0;
}