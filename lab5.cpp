//Mercado
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

struct cust{
	char first[30],last[30],cont[30];
};
struct order{
	int day[20],mon[20],year[20];
	};
struct item{
	int id[6],quan[6];
	string label [6];
	double price[30];
};
void line();



main ()
{
     cout<<"Problem 2: "<<endl;
	int x,y=0,z=1;
	double sum=0,ave,pr=0;
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
		sum=0;
		for (y=0;y<3;y++){
			sum+=st[x].grade[y];
		}
		cout<<setw(15)<<fixed<<setprecision(2)<<sum/3;
		if ((sum/3)<=74.9)
		cout<<setw(15)<<"Failed";
		else
		cout<<setw(15)<<"Passed";
		z++;
	}
	
	cust cu[6];
	order ord[6];
	item it[6];
	cout<<"Problem 3:"<<endl;
	cout<<"Enter 3 customers: "<<endl;
	for (x=0;x<2;x++)
	{
        cout<<"CUSTOMER INFORMATION "<<z<<endl;
        cin.ignore();
		cout<<"First Name: ";
		cin.getline(cu[x].first,30);
        
        cout<<"Last Name: ";
		cin.getline(cu[x].last,30);
		cout<<"\nContact Number: ";
		cin>>cu[x].cont[x];
		line();
        cout<<"\nOrder Date: \nDay: ";
		cin>>ord[x].day[x];
		cout<<"Month(in numbers): ";
        cin>>ord[x].mon[x];
        cout<<"Year: ";
		cin>>ord[x].year[x];
		
		cout<<"Enter 3 items";
		for (y=0;y<3;y++)
		{
            cout<<"\nID: ";
			cin>>it[x].id[y];
			cout<<"Name: ";
			cin>>it[x].label[y];
			line();
			cout<<"Price: ";
			cin>>it[x].price[y];
			cout<<"Quantity: ";
			cin>>it[x].quan[y];		
			
		}
		
		z++;
	}
	
	cout<<"\nSUMMARY REPORT"<<endl;
	cout<<setw(5)<<"#"<<
		setw(30)<<"Customer Name"<<
		setw(20)<<"Order Date"<<
		setw(10)<<"Items"<<
		setw(10)<<"Price"<<
		setw(10)<<"Quantity"<<endl;
	z=1;
	pr=0;
	for (x=0;x<2;x++)
	{
		cout<<setw(5)<<z;
		cout<<setw(20)<<cu[x].last<<", "<<cu[x].first;
		cout<<setw(10)<<ord[x].day[x]<<"/"<<ord[x].mon[x]<<"/"<<ord[x].year[x]<<endl;
		for(y=0;y<3;y++){
		cout<<setw(80)<<it[x].label[y];
		cout<<setw(10)<<fixed<<setprecision(2)<<it[x].price[y]<<"\t"<<it[x].quan[y]<<endl;
		pr+=it[x].price[y]*it[x].quan[y];
		}
		cout<<setw(70)<<fixed<<setprecision(2)<<"Total Price: "<<pr<<endl;
		z++;
	}
	
     system("pause>0");
     return 0;
}

void line()
{
     char s;
     do{
          cin.get(s);
          }while(s!='\n');    
}

