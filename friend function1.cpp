#include<iostream>
#include<string>
using namespace std;

class nummm
{	
	private:
			
		int day;
		
	public:	
	
	string name;
		
	   nummm(int a,string b)
		{
			
			day=a;
			name=b;
		
		}
		//friend function declaration
	friend int pw(nummm b1);
	
};
class num
{	
	private:
			
		int day;
		
	public:	
		
	string name;
	
	    num(int a,string b)
		{
			day=a;
			name=b;	
		}
			
		friend int pww(num b2);
};
 //friend function defination
     int pw(nummm b1)
	{
	 cout<<"this first friend function"<<endl<<endl;	
	 cout<<"from the friend function="<<b1.day<<endl;
	 cout<<"your name="<<b1.name<<endl<<endl;
	 

    }
 int pww(num b2)
	{
	 cout<<"this second friend function"<<endl;		
	 cout<<"from the friend function="<<b2.day<<endl;
	 cout<<"your name="<<b2.name<<endl;

    }
int main()
{

int n;
cout<<"please enter no. 1 or 2=";
cin>>n;
switch(n)
{
	case 1:
		{
		nummm T1(55,"naman");
		pw(T1);
		break;
        }
		case 2:
			{
			num T2(56,"tiger");
			pww(T2); 
			break;
	    	}

default:
	{
	
	cout<<"Invalid input. Please enter either 1 or 2";
	break;
   }
		
}
   
  //  nummm T3(57,"ram");
	

	//	pw(T3);
	return 0;
}
