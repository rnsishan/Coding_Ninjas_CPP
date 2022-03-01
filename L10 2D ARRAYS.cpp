//L10 2D ARRAYS
//tic tac toe

#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    //taking input
    for(int i=0;i<m;i++){   //rows
        for(int j=0;j<n;j++){   //filling columns
            cin>>a[i][j];
    }
    }
    //taking output
    for(int i=0;i<m;i++){   
        for(int j=0;j<n;j++){   
            cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    //printing column wise
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
}

