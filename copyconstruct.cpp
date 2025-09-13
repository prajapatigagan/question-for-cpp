#include<iostream>
using namespace std;
class num
{
	private:
		int id;
		public:
		int t;
		num(int x)
		{
			id=x;
		}
		num(num &t)
		{
			id=t.id;
			cout<<"copy constructor"<<id;
		}
	
};
int main()
{
	num uu(10);
	num tu=uu;
	return 0;
}

