//how is data stored
//ascii values
#include <iostream>

using namespace std;

int main()
{   int A=1990;
    char c;
    c=A;
    cout<<c<<endl;

    c='0';
    A=c;
    cout<<A<<endl;
    
    float f=1.2;
    A=f;
    cout<< A<<endl;


    int i=10;
    char x='a';
    
    int o=i+x;
    
    cout<<o<<endl;
    //autotypecast isme hua ascii value add hogayi
    char d=i+x;
    //ab 107 pe jo ascii hoga vo print hoga.
    
    
    
    cout<<d<<endl;
    
//'a'=97
//'b'=98
//typecasting
//its just going to 
//copy last byte and print the corresponding letter
   
   
    return 0;
}

