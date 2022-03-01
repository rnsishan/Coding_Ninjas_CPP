//L10 HOW ARE 2D ARRAYS STORED
#include <iostream>

using namespace std;

void printarray(int a[][100], int m, int n){    //V IMP TO PASS VALUE
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    /* indexing explained in the video. how value is stored in
    specific indexes.
      R  c
    b[5][5]
    
    a[i][j]===> c*i+j   how value of actual index is calculated
    
    we need to specify value of c,by putting total number of
    column values in function parameter (very imp)
    ALWAYS PASS THE COLUMN VALUE IN FXN
    
    */
    
    int a[100][100];    //see value is 100 column wali.
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    printarray(a,m,n);
    return 0;
}
