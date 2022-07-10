// write a program two concatenate two strings
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string s1;
    string s2;
    string s3;

    cout<<"enter your first part of the string :\n\n";
    getline(cin,s1);
    cout<<"enter your second part of your string : \n\n";
    getline(cin,s2);
    s3=s1 + " " + s2;
    cout<<"your string wil be "<<s3<<endl;
    cout<<"string size: "<<s3.length()<<"\n\n";
    cout<<"string size: "<<sizeof(s3);
    
    
}
