//L9 SEARCHING AND SORTING.
//binary search

#include <iostream>

using namespace std;


int binarysearch(int arr[],int n,int x){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+end/2;
        
        if(arr[mid]==x){
            return mid;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
    
}

int main()
{
    
    //size of array
    int n;
    cin>>n;
    
    int input[100];
    
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    
    int x;
    cin>>x;
    cout<<binarysearch(input,n,x)<<endl;
    return 0;
}
