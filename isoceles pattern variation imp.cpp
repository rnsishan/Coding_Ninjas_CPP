//isoceles pattern variation
#include <iostream>

using namespace std;

int main()
{
     int n;
    cin>>n;
    
        int i=1;
    while(i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j =1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        k--;
        j=i-1;
        k=k-1;
       while(j>=1){
            cout<<k;
            j--;
            k--;
            
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
