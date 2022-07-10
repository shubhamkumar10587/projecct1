// to perform all arithematic operation
#include<iostream>
using namespace std;
int main(){
    int num1, num2, sub, multi, mod,add;
    float div;
    cin>>num1;
    cin>>num2;
    add=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    mod=num1%num2;
    div= (float)num1/(float)num2;
    cout<<"addition of two number num1 &num2 is :" <<add<<"\n\n";
    cout<<"substraction of two number num1 &num2 is :" <<sub<<"\n\n";
    cout<<"multiplication of two number num1 &num2 is :" <<multi<<"\n\n";
    cout<<"modulus of two number num1 &num2 is :" <<mod<<"\n\n";
    cout<<"divison of two number num1 &num2 is :" <<div<<"\n\n";

    

}