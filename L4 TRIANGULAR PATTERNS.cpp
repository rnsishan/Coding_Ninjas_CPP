//triangular patterns various

#include <iostream>

using namespace std;

int main()
{
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    
   /* int n;      //1 23 345
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }*/
    int n;      //1 23 456 78910 good one
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    } 
    

    return 0;
}
