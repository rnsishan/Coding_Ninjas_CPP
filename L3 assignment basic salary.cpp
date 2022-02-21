//assignment salary
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Write your code here
	int basic,allow=0;
	char Grade;
    
    
    cin>>basic>>Grade;
    if (basic>=0 && basic<=7500000){
    if(Grade==65){
        allow=1700;
    }
    else if(Grade==66){
        allow=1500;
    }
	else{
        allow=1300;
    }
    
    double hra= basic*(20.0/100);
   double da= basic*(50.0/100);
    
    double pf=(11.0/100)*basic;
    
	 double totalSalary = basic + hra + da +allow-pf;

	cout<< (int) round(totalSalary)<<endl;
}}
