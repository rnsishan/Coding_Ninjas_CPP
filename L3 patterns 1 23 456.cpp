//patterns  1 23 456 
#include <iostream>

using namespace std;

int main()
{
     int i=1,n,val=1;
    cin>>n;
   while(i<=n){
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

