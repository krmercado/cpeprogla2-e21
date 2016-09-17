#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int factorial (int num);
int mAx(int x,int y);
int answer;

main ()
{
	cout<<"PROBLEM 1\n";
	double a;
	cout<<"Enter a number to be round of: ";
	cin>>a;
	cout<<"Round off value: "<<round(a);

	cout<<"\nPROBLEM 2\n";
	int x,number, A[20];
	cout<<"Unique numbers: ";
	for(x=0;x<10;x++)
	{
		A[x]=rand()%20+1;
		number=A[x];
		if (number!=A[x])
		cout<<number<<" ";
 	}

	cout<<"\nPROBLEM B\n";
	
	int ans=1;
	x=0;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The factorial of "<<x<<" is : "<<factorial (x);

	cout<<"\nPROBLEM C\n";
	
	int y;
	x=0;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"\nEnter second number: ";
	cin>>y;
	cout<<"Greatest number is: "<<mAx(x, y);
	
	
	return 0;
}

int factorial (int num)
{
	int y,ans;
		for(y=1;y<=num;y++)
	{
		ans*=y;
	}
	return ans;
}

int mAx(int num1,int num2)
{
 if (num1>num2)
 answer=num1;
 else 
 answer=num2;

	return answer;	
	
}
