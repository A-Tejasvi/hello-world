#include<iostream>
using namespace std;
int main()
{	int i;
	cout<<"numbers divisible by 7, but not a multiple of 5 between 2000 and 3200 are :\n";
	for(i=2000;i<=3200;i++)
		if((i%7==0)&&(i<=3200))
		{	cout<<i;
			break;
		}
	
	for(i++;i<=3200;i++)
		if((i%7==0)&&(i<=3200))
			cout<<","<<i;
	
	return 0;
}
