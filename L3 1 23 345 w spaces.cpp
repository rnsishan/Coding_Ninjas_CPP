// 1 23 345 w spaces
#include <iostream>

using namespace std;

int main()
{
    int i=1,n,val=0;
    cin>>n;
   while(i<=n){
       int k=n-1;
       while(k>=i){
           cout<<" ";
           k--;
       }
        int j=i;
        while(j<=i+val){
            cout<<j;
            j=j+1;
        }
            val=val+1;
        cout<<endl;
        i++;
    }
    

    return 0;
}
