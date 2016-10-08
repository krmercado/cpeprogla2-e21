//Mercado
#include<iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream f("input.txt");
    
    int num,x,sum,mult1=0,mult2=0,mult3=0,tr=0;
    
    while (f >> num) {
    	for(x=0;x<num;x++){
		if (x%15==0)
		mult1+=x;
		else if (x%5==0)
		mult2+=x;
		else if (x%3==0)
		mult3+=x;
		else
		tr+=x;
		 }
    	sum=mult1+mult2+mult3;
          cout <<sum<<endl;
     
    }
    
   
    system("pause");
    return 0;
}   
