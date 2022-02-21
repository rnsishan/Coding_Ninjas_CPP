//L5 INVERTED PATTERN

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


/*
    int n;  //my way
    cin>>n;
    int i=n;
    while(i){
        int stars=i;
        while(stars){
            cout<<"*";
            stars--;
        }
        int j=1;
        while(j<i){
            cout<<" ";
        
            j++;
        }
        cout<<endl;
        i--;
        
    }
*/
    return 0;
}
