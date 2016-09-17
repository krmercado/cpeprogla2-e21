#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

void copy ();
void compare();
void concatenate ();
void length ();

main ()
{
     cout<<"Problem 1: "<<endl;
     int x(11), y(6), z(22), *p1, *p2;
     p1=&z;
     p2=&x;
     cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<"*p1: "<<*p1<<"*p2: "<<*p2<<endl;
     *p1-*p2;
     z=*p1+2;
     cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<"*p1: "<<*p1<<"*p2: "<<*p2<<endl;
     *p1-y;
     cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<"*p1: "<<*p1<<"*p2: "<<*p2<<endl;
     p1=&y;
     *p1=y+x;
     cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<"*p1: "<<*p1<<"*p2: "<<*p2<<endl;
     x=1; y=2; z=3;
     p1=p2;
     *p2=*p1+x;
     cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<"*p1: "<<*p1<<"*p2: "<<*p2<<endl;

     cout<<"\nProblem 2: "<<endl;
     copy ();
     
     cout<<"\nProblem 2: "<<endl;
     compare ();
     
     cout<<"\nProblem 3: "<<endl;
     concatenate ();

     cout<<"\nProblem 4: "<<endl;
     length ();    
     
     int ct;
     char a[30];
     
     cout<<"\nProblem 5: "<<endl;
     cout<<"Enter a word: ";
     cin.getline (a,30);
     ct=strlen(a);
     char *s1=&a[0];

     cout<<"The reverse of the word is:";
     for (x=ct;-1<x;x--)
     {
         cout<<s1[x];
         }
     
     system ("pause>0");
     return 0;     
}

void copy ()
{
     int x,ct;
     char a[30],b[30];
     cout<<"Enter a word for str1: ";
     cin.getline (a,30);
     ct=strlen(a);
     cout<<"The word in str2 is ";
     for (x=0;x<ct;x++)
     {
         b[x]=a[x];
         cout<<b[x];
     }
         
}

void compare ()
{
	int x,y,ct;
	string a,b;
	cin.ignore();
	cout<<"Enter first word to compare: ";
	cin>>a;
	cin.ignore();
	cout<<"Enter second word: ";
	cin>>b;
	
	if (a==b)
	{
		cout<<"\nEqual";
	}
	else
	cout<<"\nNot Equal";
}

void concatenate ()
{
     char a[30],b[30],c[30];
     int x,y,ct1,ct2,z;
     cin.ignore();
     cout<<"Enter a word: ";
     cin.getline (a,30);
     cin.ignore();
     cout<<"Enter a second word: ";
     cin.getline (b, 30);
     ct1=strlen (a);
     ct2=strlen (b);
     
     cout<<"The joined word is: ";
     for (x=0;x<ct1;x++)
     {
         c[x]=a[x];
         cout<<c[x];
         }
     
     for (y=0;y<ct2;y++)
     {
         
         c[x+1]=b[y];
         x++;
     cout<<c[x];
         }
     
}

void length ()
{
     int x=0,y;
     char a[30];
     cout<<"Enter a word: ";
     cin.getline (a,30);
     while (a[x]!='\0')
     {
     x++;
     }
     cout<<"The length of the word is: "<<x;
}

