//L5 MIRROR IMAGE PATTERN
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
        int i=1;
    while(i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        int stars =1;
        while(stars<=i){
            cout<<"*";
            stars=stars+1;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

/*
 while(i<=n){       same thing
        int spaces=n-i;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int j=i;
        while(j){
            cout<<"*";
        
            j--;
        }
        cout<<endl;
        i++;
        
    }
    */


