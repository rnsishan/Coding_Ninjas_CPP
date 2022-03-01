//L9 understanding bubble sort
#include <iostream>

using namespace std;

/* 
bubble sort, first two elements are compared,which one is smaller gets
arranged at i,then next two 
are compared like i and i+1, then i+1 then i+2 element.

after one traversal,largest element got placed at last.

aise hee round chalege,but last element excluded.


*/



void bubblesort(int arr[],int n){
    
for(int j=0;j<n-1;j++){         //kitne round chalega
    for(int i=0;i<n-1-j;i++){   //full traversal of a round
        if(arr[i]>arr[i+1]){    //n-1-j last element chod denge for 
                                //checking,cos obv biggest hoga.
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    
}

int main()
{
    int n;
    cin>>n;
    
    int input[n];

    for(int i=0;i<n;i++){
        cin>>input[i];
        
    }
    
    bubblesort(input,n);
    
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
        
    }
    return 0;
}
