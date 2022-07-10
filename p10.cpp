#include<iostream>
using namespace std;
int main ()
{
    int x, y ,w, z;
    cout<<"enter the days";
    cin>>x;
    y=x/365;
    z=(x%365)/7;
    w=x-(y*365+z*7);
    cout<<"years :"<<y<<" \n\nweeks :"<<z<<"\n\ndays :"<<w;

}