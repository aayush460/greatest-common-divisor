#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
	if(x==1)
	return 1;
	
	if(y%x==0)
	return x;
	
	return gcd(y%x,x);
}
int main()
{
	int x,y;
	cin>>x>>y;
	if(x<y)
	cout<<"greatest common divisor of "<<x<<" ans "<<y<<" is "<<gcd(x,y);
	else
	cout<<"greatest common divisor of "<<x<<" ans "<<y<<" is "<<gcd(y,x);
	}	
