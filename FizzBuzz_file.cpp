//Mercado, Kristine Dyan R.
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream f("input.txt");
	
	int x;
	
	while (f>>x)
	{
		if ((x%3==0)&&(x%5==0))
		cout<<"FizzBuzz"<<endl;
		else if (x%3==0)
		cout<<"Fizz"<<endl;
		else if (x%5==0)
		cout<<"Buzz"<<endl;
		else
		cout<<x<<endl;
	}
}
