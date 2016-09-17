//mercado
#include <iostream>
#include <cstring>
using namespace std;

main ()
{
	cout<<"Problem 1";
	char str1[50],str2[50];
	int c;
	
	cout<<"\nEnter a first word (str1): ";
	gets (str1);
	cout<<"Enter a second word (str2): ";
	gets (str2);
	c=strcmp(str1,str2);
	if (c==0)
	cout<<"Equal";
	else if (c<0)
	cout<<"Negative";
	else
	cout<<"Positive";

	cout<<"\nProblem 2";
	char stR1[50],stR2[50];
	cout<<"\nEnter a first word (str1): ";
	gets (stR1);
	cout<<"\nEnter a second word (str2): ";
	gets (stR2);
	strcpy (stR1,stR2);
	
	cout<<"New string value for str1: "<<stR1;
	
	cout<<"\nProblem 3";
	char A[50],B[50];

	cout<<"\nEnter a first word (str1): ";
	gets (A);
	cout<<"Enter a second word (str2): ";
	gets (B);
	strcat (A,B);
	
	cout<<"New string value for str1: "<<A;
	

	cout<<"\nProblem 5";
	char Str1[50],Str2[50];
	int i,x;
	cout<<"\nEnter some string: ";
	gets (Str1);
	Str1[0]=toupper(Str1[0]);
	cout<<Str1[0];
	i=strlen(Str1);
	for(x=1;x<=i;x++)
	{
		if(Str1[x]==' ')
		Str1[x+1]=toupper(Str1[x+1]);
		cout<<Str1[x];
	
	}
	
	system ("pause>0");
	return 0;
}
