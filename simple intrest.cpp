#include<iostream>
using namespace std;
int main()
{
	int a=50000;
	int p,t,r;
	cout<<"enter value";
	cin>>a,p,t,r;
	if((p*t*r)/100)
	{
		if(a<=1000)
		{
			cout<<"low interest";
		}
		else if(1000<a>=10000)
		{
			cout<<"moderate inetrest";
		}
		else
		{
			cout<<"high interest";
		}
	}
	else
		{
			cout<<"zero balence";
		}
	return 0;
}