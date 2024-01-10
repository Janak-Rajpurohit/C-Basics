#include<iostream>

using namespace std;

// int product(int a,int b){
//     static int c=0;     // exe only for first call, val of c is saved ,then increamented 
//     c=c+1;             // c =1 now then if funct is called again c is = 1 not 0 then 2 then 3 
//     return a*b+c;
// }

inline int product(int a,int b){
    return a*b;
}
// factor has default val 1.04 , used when no agru is passed
int moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}

//constant argu
int strlen(const char p){
    return lengthof(p);
}


int main(){
    int a , b;
    cout<<"Enter the value  of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    //  if we call funct multiple times , then it will be not releevant to repeatedly taking agru and returning 
    // in recussion do not use inline // do not use static var will inline
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;

    int money;
    // cout<<"Balance :";
    // cin>>money;
    // cout<<"If you have "<<money<<" Rs in your bank acc, you will recieve "<<moneyReceived(money)<<" Rs.";
    int interest;
    cout<<"Balance :";
    cin>>money;
    cin>>interest;
    cout<<"VIP : If you have "<<money<<" Rs in your bank acc, you will recieve "<<moneyReceived(money,interest)<<" Rs.";

    cout<<"The length of char a "<<strlen("a");
    return 0;
}