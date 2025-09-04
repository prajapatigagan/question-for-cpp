#include<iostream>
#include<string>
using namespace std;
int main()
{
int id;
	struct teacher{
	string name;
	int age;
	double salry;
	};
	struct teacher a={
		"ram",
		45,
		50000,
	};
		cout<<a.name<<endl;
		cout<<a.age<<endl;
		cout<<a.salry<<endl;
		cout<<endl;
	struct teacher b={
		"karan",
		44,
		44000
	};
		cout<<b.name<<endl;
		cout<<b.age<<endl;
		cout<<b.salry<<endl;
		cout<<endl;
	struct teacher c={
		"raju",
		28,
		555555
	};
        cout<<c.name<<endl;
		cout<<c.age<<endl;
		cout<<c.salry<<endl;
		cout<<endl;
struct teacher d={
	"ramu",
	34,
	78000
};
        cout<<d.name<<endl;
		cout<<d.age<<endl;
		cout<<d.salry<<endl;
		cout<<endl;

struct student{
	string name;
	int age;
	int std;
};
struct student e={
	"ayush",
	15,
	12
};
cout<<e.name<<endl;
cout<<e.age<<endl;
cout<<e.std<<endl;
cout<<endl;

struct student f={
	"aman",
	18,
	12
};
cout<<f.name<<endl;
cout<<f.age<<endl;
cout<<f.std<<endl;


string p;
cout<<"teacher or student"<<endl;
cin>>p;
if(p=="teacher")
{
	cout<<"teacher or student id 1,2,3,4"<<endl;
cin>>id;
switch(id){


   case 1:
	
cout<<"teacher a"<<endl;

break;
	case 2:
		cout<<"teacher b"<<endl;
		break;
		case 3:
			cout<<"teacher c"<<endl;
			break;
			case 4:
				cout<<"teacher d"<<endl;
				break;
				}
				cout<<c.name<<endl;
				cout<<c.age<<endl;
	        	cout<<c.salry<<endl;
}
	else if(p=="student")
	{
	cout<<"student id 1,2"<<endl;
	cin>>id;
	switch(id)
{
	case 1:
		cout<<"student e"<<endl;
		break;
	case 2:
		cout<<"student f"<<endl;
		break;
				
				}	
cout<<"name"<<f.name<<endl;
cout<<"age"<<f.age<<endl;
cout<<"class"<<f.std<<endl;		
}
}