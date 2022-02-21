//a equal to b

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    int a;
    int b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    
    /*bool c= a==b;
    if (c==1){
        cout<<"yes"<<endl;}
    else
        {cout<<"no"<<endl;}
        
    cout<<"value of bool is "<<c<<endl;
    */
    
    //printing using boolean
    
    bool isEqual = (a==b);
    bool isGreater = (a>b);
    bool isLess = (a<b);
    cout<<"are they Equal"<<isEqual<<endl;
    cout<<"is A greater"<<isGreater<<endl;
    cout<<"is A less"<<isLess<<endl;
    
    
    //LOGICAL OPERATORS && || !
    bool third= isEqual && isGreater; //always FALSE
    bool fourth= isEqual || isGreater; 
    
    cout << "NOT EQUAL "<< !isEqual<<endl;
    
    
    
    /*mcq
    double a = 6 / 4;
    int b  = 6 / 4;
    double c = a + b;
    cout << c;
    */
    
    //also % cant be used with double or float.
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
