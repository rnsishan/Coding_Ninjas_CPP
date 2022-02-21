#include <iostream>

using namespace std;

int main()
{
    int f;
    cout<<"enter farhenheit value"<<endl;
    cin>>f;
    int c=(f-32)*(5.0/9); //int hai 37 dega
    //else
    
    int d=(f-32*5.0)/9; //this also works
    cout<< c<<endl;
    
    cout<< (f-32)*(5.0/9)<<endl; //this gives 37.778
    
    //modulus operator
    cout<< 10 % 3 <<endl;
    
    
    
    return 0;
}
