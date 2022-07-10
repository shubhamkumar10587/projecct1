// swap value of two number
#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int z;
	cin>>x;
	cin>>y;
	cout<<"before swaping numbers are:"<< x<<" "<< y <<endl;
	
	z=x;
	x=y;
	y=z;
	cout<<"After swaping numbers are:"<< y<<" "<< x;
	
	
	return 0;

}		