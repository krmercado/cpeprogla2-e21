//mercado
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
main ()
{
	int x,y,ans,sum=0,lim;
	while (ans==1)
	{
		cout<<"\nEnter choice: \n1. Operation \n2. End of File\n";
		cin>>ans;
		switch (ans)
		{
		case 1:
			cout<<"Enter numbers: \n";
			cin>>x>>y;
			if (x<pow(2,32)||(y<pow(2,32)))
				{
				sum=x-y;
				cout<<"Answer is: \n"<<abs(sum);}
			
			else
		 	{
			 cout<<"Numbers too high!";}
			cin.get();
			break;
		default:
			break;
		}
	}
	return 0;
}
