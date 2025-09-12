#include<iostream>
#include<string>
using namespace std;
class num
{
	private:
		int awa;
		int ama;
	public:
		num()
		{
			awa=0;
			ama=0;
		}
	 
    num(int a,int b)
	{ 
	awa=a;
	ama=b;                                                                            
	}
	int show()
	{
		cout<<awa<<" first "<<ama<<" second "<<endl;
	}
	num operator +(num A1)//binary operator ;
	{
		num temp;
		temp.awa=awa+A1.awa;
		temp.ama=ama+A1.ama;
		return temp;
	}
	
		
};
int main()
{
	num a1(7,8);
	num b1(7,4);
	num c1;
	
	c1=a1+b1; //C1=a1.add(b1)
	c1.show();
}



//function overloading;
int num(int a,int b)
{
	cout<<a+b<<endl;
}
int add(double a,double b)
{
	cout<<a+b;
}
int main()
{
	num(3,66);
	add(6,8);
}