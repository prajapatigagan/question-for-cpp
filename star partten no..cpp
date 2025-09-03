#include<iostream>
#include<string>
using namespace std;
int main()
{
	//Right-angled number triangle
		for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<b;
		}
	cout<<endl;	
	}


//Right-angled binary triangle (0-1 pattern)
	for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
	    	cout<<b%2;
		}
	cout<<endl;	
	}

//Right-angled alphabet triangle
	for(char a='A'; a<='E'; a++)
	{
		for(char b='A'; b<a; b++)
		{
	    	cout<<b;
		}
	cout<<endl;	
	}
	
	//Binary Triangle Pattern (row-wise same digit)
		for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
	    	cout<<a%2;
		}
	cout<<endl;	
	}

//Alphabet Triangle Pattern (row-wise same alphabet)
	for(char a='A'; a<='E'; a++)
	{
		for(char b='A'; b<='E'; b++)
		{
	    	cout<<b;
		}
	cout<<endl;	
	}
//Heart symbol ❤️
	for(char a='A'; a<='A'; a++)
	{
		for(char b=3; b<=3; b++)
		{
	    	cout<<b;
		}
	cout<<endl;	
	}

	//Special Symbols Block Pattern
	for(char a='A'; a<='E'; a++)
	{
		for(char b=1; b<=5; b++)
		{
	    	cout<<b;
		}
	cout<<endl;	
	}

//Reverse Alphabet Block Pattern
	for(char a='E'; a>='A'; a--)
	{
		for(char b='E'; b>='A'; b--)
		{
	    	cout<<a;
		}
	cout<<endl;	
	}
	

	//Inverted Alphabet Triangle
	//    char b=26;
	
		for(char a='E'; a>='A'; a--)
	{
		for(char b='E'; b>=a; b--)
		{
	    	cout<<a;
		}
	cout<<endl;	
	}
	
	
//Square Star Pattern
	for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=5; b++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}
	

	//Repeated Number Triangle
	for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<a;
		}
	cout<<endl;	
	}
	
	//Inverted Right-angled Triangle (Star Pattern)
		for(int a=1; a<=5; a++)
	{
		for(int b=5; b>=a; b--)
		{
			cout<<"*";
		}
	cout<<endl;	
	}
	
	//Inverted Right-angled Number Triangle
		for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=5-a+1; b++)
		{
			cout<<b;
		}
	cout<<endl;	
	}
	
//right angled star triangle
		for(int a=1; a<=5; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}
	
	//Diamond Star Pattern
		for(int a=1; a<9; a++)
	{
		for(int b=8-a; b>0; b--)
		{
			cout<<" ";
		}
		for(int c=6-a; c<5+a; c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
   for(int a=1; a<11; a++)
	{
		for(int b=5; b>6-a; b--)
		{
			cout<<" ";
		}
		for(int c=12-a; c>a-5; c--)
		{
			cout<<"*";
		}
		cout<<endl;
   }
   
   
   //Hill Pattern
   for(int a=1; a<8; a++)
   {
   	for(int b=0; b<a; b++)
   	{
   		cout<<"*";
		}
		cout<<endl;
	}
	for(int a=0; a<10; a++)
	{
		for(int b=8; b>a; b--)
		{
			cout<<"*";
		}
		cout<<endl;
	}


//Right-angled 0-1 Pattern

	for(int a=1; a<=8; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<b%2;
		}
		cout<<endl;
	}
	

	//Floyd’s Triangle
int num=1;
		for(int a=1; a<=8; a++)
	{
		for(int b=1; b<=a; b++)
		{	
			cout<<num<<" ";
			num=num+1;
	    }
		cout<<endl;
	}
	

	//Inverted Alphabet Sequence Triangle
		for(char a='A'; a<='E'; a++)
	{
		for(char b='E'; b>=a; b--)
		{
			cout<<b;
		}
	cout<<endl;	
	}
	
	//Inverted Alphabet Triangle
		for(char a='A'; a<='E'; a++)
	{
		for(char b='A'; b<='E'-a+'A'; b++)
		{
			cout<<b;
		}
	cout<<endl;	
	}
	
	//Alphabet Pyramid with Repeated Letters
		for(char a='A'; a<='H'; a++)
	{
		for(char b='A'; b<=a; b++)
		{	
			cout<<a;
	    }
		cout<<endl;
	}

//heart pattern for star...
int n=5;
for(int i=n/2; i<=n; i+=2)
{
	for(int j=1; j<n-i; j+=2)
	{
	cout<<" ";		
	}
	for(int j=1; j<=i; j++)
	{
		cout<<"*";
	}
	for(int j=1; j<=n-i; j++)
	{
		cout<<" ";
	}
	for(int j=1; j<=i; j++)
	{
		cout<<"*";
	}
	cout<<endl;
}	
for(int i=n; i>=1; i--)
{
	for(int j=i; j<n; j++)
	{
		cout<<" ";
	}
	for(int j=1; j<=(i*2)-1; j++)
	{
		cout<<"*";
	}
	cout<<endl;
}


//M star pattern...
for(int i=1; i<=7; i++)
{
	for(int j=1; j<=7; j++)
	{
		if(j==1||j==7||(i==j&&j<=4)||(j==8-i&&j>4))
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	}
	cout<<endl;
}


//Hollow square....
//int n=8; 
for(int i=1; i<=n; i++)
{
	for(int j=1; j<=n; j++)
	{
		if(i==1||i==n||j==1||j==n)
		{
			cout<<"*";
		}
			else
			{
				cout<<" ";
			}
	}
		cout<<endl;
}

}

