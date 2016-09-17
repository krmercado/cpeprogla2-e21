#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x, n=1;
	for(x=0;x<100;x++)
	{
		if ((n%5==0)&&(n%3==0))
			cout<<"FizzBuzz"<<endl;
		else if (n%5==0)
			cout<<"Buzz"<<endl;
		else if (n%3==0) 
			cout<<"Fizz"<<endl;
		else
			cout<<n<<endl;
		n++;
	}
	
	return 0;
}
