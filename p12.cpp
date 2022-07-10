#include<iostream>
#include<string>
using namespace std;
int main(){
    int z,y,i;
    char x;
    string s1;
    string s2;
    string s3;
    string s4;
    getline(cin, s1);
    getline(cin,s2);
    s3=s1+""+s2;
    for(int i =0; i<s3.length();i++)
    {
        //z =int(s3[i]);
        // y =z-32;
        // x= char(y);
        //s3[i]=x;
        s3[i]=toupper(s3[i]);
    }
    
    cout<<"the string in the upper case is :"<< s3<<endl;
    
}