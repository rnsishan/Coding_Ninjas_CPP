//DCB
#include <iostream>

using namespace std;

int main() {
    
     int n;
    cin>>n;
    long x=n;
    long pv=1;
    long ans=0;
    while(x!=0){
    long rem=x%2;    
            ans=ans+ rem*pv;
        x=x/2;
        pv=pv*10;
        }
        
        cout<<ans;
}
