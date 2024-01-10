# include <iostream>

using namespace std;
int glo=8;
void sum(){
    int a;
    cout<<"\nthis is inside sum()"<<glo;
}
void sum1(){
    int glo=98;
    cout<<glo;
}
int main(){
    int a=4  , b=5 ;
    float pi=3.14;
    char c='j';
    int glo=90;
    // cout<<"working";
    // use \n for newline 
    cout<<"Value of a is "<<a<<" Value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    // in main fun glo gets updated localy
    cout<<"\nthis is inside main()"<<glo;
    //  but  sum access the global var glo=8
    sum();
    sum1();
    return 0;
}



