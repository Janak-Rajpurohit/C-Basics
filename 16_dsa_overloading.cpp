#include<iostream>

using namespace std;
// overloading is for same name funct performing diff task
// it compares prototype and argu 
int sum(int a,  int b){
    cout<<"Using funct with 2 argu"<<endl;
    return a+b;
}

int sum(int a , int b, int c){
    cout<<"Using funct with 3 argu"<<endl;
    return a+b+c;
}
// vol of cylinder
int vol(double r,  int h){
    return (3.14*r*r*h);
}
// vol of cube
int vol(double a){
    return (a*a*a);
}
// vol of cubiod
int vol(int l , int b, int h){
    return (l*b*h);
}

int main(){
    // cout<<"The sum  of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"The sum  of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;

    cout<<"The vol of cuboid of 3 ,7 and 6 "<<vol(3,7,6)<<endl;
    cout<<"The vol of cylinder of radius 3 and height 6"<<vol(3,6)<<endl;
    cout<<"The vol of cube of side 3"<<vol(3)<<endl;

    return 0;
}