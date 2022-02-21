//fibonacci series
#include <iostream>

using namespace std;

int fxn(int n){
    int sum =0;
    
    if(n==0 || n==1){
        return 1;
        
    }
    else{
    sum+= fxn(n-1)+fxn(n-2);
}
return sum;
    
}

int main()
{
    int n;
    cin>>n;
        
    cout<<fxn(n-1)<<endl;

    return 0;
}
