//reversing a number
#include <iostream>

using namespace std;

int main()
{int n;
    cin>>n;
    int x=n;
    int sum=0;
    while(x>0){
        int c=x%10;
        sum=sum*10+c;
       x= x/10;
        
    }
    cout<<sum;

    return 0;
}
