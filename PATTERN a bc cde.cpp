#include <iostream>

using namespace std;

int main()
{
            //A BC CDE DEFG
  int n;
    cin>>n;
    int i=1;
    char k='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        k='A'+i;
        cout<<endl;
        i++;
    }

    return 0;
}
