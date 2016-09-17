#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>
using namespace std;

struct student{
	char name[50];
	int id[10];
	double grade[6],tot[6],ave[6];
};

void newline ();

main ()
{
	int x,y=0,z=1;
	double sum=0,ave;
	cout<<"Problem 2: "<<endl;
	cout<<"Enter 5 Student Records "<<endl;
	student st[6];
	for (x=0;x<5;x++)
	{
		
		cout<<"\nStudent "<<z<<endl;
		cout<<"Id: ";
		cin>>st[x].id[x];
		cin.ignore();
		cout<<"Name: ";
		cin.getline(st[x].name,50);
		cout<<"Enter 3 quizzes: ";
		for(y=0;y<3;y++){
		cin>>st[x].grade[y];}
		z++;
		
	} 
	
	for (x=0;x<5;x++)
	{
	
		for (y=0;y<3;y++){
		st[x].tot[x]=sum+=st[x].grade[y];	
		}st[x].ave[x]=st[x].tot[x]/4;
	}
	cout<<"\n";
	cout<<setw(10)<<"No.";
	cout<<setw(20)<<"Student No";
	cout<<setw(30)<<"Name";
	cout<<setw(15)<<"Grade";
	cout<<setw(15)<<"Remarks";
	z=1;
	for (x=0;x<5;x++)
	{
		
		cout<<"\n";
		cout<<setw(10)<<z;
		cout<<setw(20)<<fixed<<setprecision(2)<<st[x].id[x];
		cout<<setw(30)<<st[x].name;
		cout<<setw(15)<<fixed<<setprecision(2)<<st[x].ave[x];
		if ((sum/4)<=74.9)
		cout<<setw(15)<<"Failed";
		else
		cout<<setw(15)<<"Passed";
		z++;
	}
	
	system("pause>0");
	return 0;
}
