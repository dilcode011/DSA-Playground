#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Enter the third number:";
    cin>>num3;

    cout<<((num1>num2)?((num1>num3)?"Num1 is largest":"Num3 is largest"):((num2>num3)?"Num2 is largest":"Num3 is largest"))<<endl;
    return 0;
}