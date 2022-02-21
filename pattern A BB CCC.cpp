#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    char startchar='A';
    while(i<=n){
    int j=1;
    while(j<=i){
            cout<<startchar;
            j++;
        }
    startchar++;
	cout<<endl;
    i++;
    }

    return 0;
}
