//L5 DIAMOND OF STARS PATTERN

#include <iostream>

using namespace std;

int main()
{
     int n;
    cin>>n;
    int n1=(n+1)/2;
    int n2=n1-1;
        int i=1;
    while(i<=n1){
        int spaces =1;
        while(spaces<=n1-i){
            cout<<" ";
            spaces++;
        }
        int j =1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        
        cout<<endl;
        i++;
    
        }
        
        int q=n2;
        while(q>0){
         int   spaces=n2-q+1;
            while(spaces){
                cout<<" ";
                spaces--;
            }
        int star=2*q-1;
        while(star>0){
            cout<<"*";
            star--;
            
        }
        
        cout<<endl;
        q--;
        }
        
    return 0;
}

