//L6 for loop
//check for prime
#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    
    int d=2;
    bool divided=false;
    for(d;d<n;d++)
    {
        if(n%d==0){
            divided=true;
        }
        
    }
    if(divided){
        cout<<"not prime"<<endl;;
    }
    else{
        cout<<"prime";
    }
    return 0;
}
