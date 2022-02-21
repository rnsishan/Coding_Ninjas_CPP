//L6 operators and for loop
//bitwise op
#include <iostream>

using namespace std;

int main()
{ int a=2&3;
    cout<< a<<endl;
    a=2|3;
    cout<<a<<endl;
    
    a=~3;       //not
    cout<<a<<endl;
    
    a=2^3;
    cout<<a<<endl;
    
    
    a=2<<1;
    cout<<a<<endl;
    
    
    a=2<<2;
    cout<<a<<endl;
    
    
    a=15>>2;    //1 ka shift halves the value
    cout<<a<<endl;
    
    
    return 0;
}
