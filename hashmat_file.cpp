//Mercado
#include<iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream f("sample.txt");
    
    int hash, opp;
    
    while (f >> hash >> opp) {
          cout << abs(hash-opp)<<endl;
    }
    
   
    system("pause");
    return 0;
}   
