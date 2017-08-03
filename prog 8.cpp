#include<iostream>
using  namespace std;
class shape
{	public:
	int a;
	shape()
	{	a=0;
	}
	void area()
	{	cout<<"\nArea of shape = "<<a;
	}
}sh;

class sqare: public shape
{	public:
	int length;
	init(int l)
	{	length=l;		
	}
	void area()
	{	a=length*length;
		cout<<"\nArea of square = "<<a;
	}
}s;

int main()
{	s.init(5);
	sh.area();
	s.area();
	return 0;
}



