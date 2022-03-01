//L8 LINEAR SEARCH
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int flag=0;
        int i=0;
        for(i;i<n;i++){
            if(arr[i]==x){
                cout<<i<<endl;
                flag=1;
                break;
            }
            }
        if(flag==0){
            cout<<"-1"<<endl;
        }
        t--;
        }

    return 0;
}
