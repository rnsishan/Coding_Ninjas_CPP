//BCD
#include <iostream>

using namespace std;

int main()
{
    
	int n;
    cin>>n;
    int x=n;
    int sum=0;
    
        int pv=1;
    while(x>0){
        if(x%10==1){
            sum=sum+ pv*1;
        }
        else{
            sum=sum+pv*0;
        }
        x=x/10;
        pv=pv*2;
    }
    cout<<sum;

    return 0;
}
