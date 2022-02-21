//christmas tree pattern
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
        int j=1;
        while(j<=(2*i-1)){
            cout<<"*";
            j++;
        }
            val=val+1;
        cout<<endl;
        i++;
        
    }
    return 0;
}
