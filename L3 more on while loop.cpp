//L3 more on while loop 
#include <iostream>

using namespace std;

int main()
{   int n;
int d=2;
bool divided;  //false is default value
    cin>>n;
    
    while(d<n){
        if(n%d==0){
            cout<<"not prime"<<endl;
            divided=true;
            
        }
        d++;
        
    }
    if(!divided){
        cout<<"prime"<<endl;
    }
  
    return 0;
}
