//Mercado
#include<iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream f("input.txt");
    
    int hash, opp;
    
    while (f >> hash >> opp) {
          cout << abs(hash-opp)<<endl;
    }
    
   
    system("pause");
    return 0;
}   
