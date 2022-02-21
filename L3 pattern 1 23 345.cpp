//pattern 1 23 345

#include <iostream>

using namespace std;

int main()
{
     int i=1,n,val=0;
    cin>>n;
   while(i<=n){
        int j=i;
        while(j<=i+val){
            cout<<j;
            j=j+1;
        }
            val=val+1;
        cout<<endl;
        i++;
    }
}
