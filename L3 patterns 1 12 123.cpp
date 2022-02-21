//patterns 1 12 123 1234

#include <iostream>

using namespace std;

int main()
{
    int i=1,n;
    cin>>n;
   while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}
