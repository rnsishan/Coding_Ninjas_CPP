// L6 break and continue
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    /*int d =2;
    bool divided =false;
    while(d<n){
    if(n%d==0){
        divided=true;
        break;
    }
    d++;
}
if(divided){
    cout<<"not prime"<<endl;
}
else{
    cout<<"prime"<<endl;
}*/

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;
        j++;
        if(j>i){
            break;
        }
    }
        cout<<endl;
        i++;
}

    return 0;
}
