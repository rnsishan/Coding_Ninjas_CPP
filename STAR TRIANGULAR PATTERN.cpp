//STAR TRIANGULAR PATTERN
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=n-i;
        while(spaces>=1){
            cout<<" ";
            spaces--;
            
        }
        int j=1;int k=1;
        while(j<=i){
            cout<<"*";
            j++;
            k++;
        }
        /*
        j=i-1;
        k--;
        
        while(j>=1){
            cout<<"*";
            j--;
        }*/
        cout<<endl;
        i++;
    }

    return 0;
}
