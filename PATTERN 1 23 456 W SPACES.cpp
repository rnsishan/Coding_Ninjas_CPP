//PATTERN 1 23 456 SPACES
#include <iostream>

using namespace std;

int main()
{ 
    int i=1,n,val=1;
    cin>>n;
   while(i<=n){
       int k=1;
       while(k<=n-i){
           cout<< " ";
           k=k+1;
       }
        int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
