//L9 SELECTION SORT
#include <iostream>

using namespace std;

void selectionsort(int input[],int n){
    for(int i=0;i<n-1;i++){
    //figure out min element
    int min=input[i];
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(input[j]<min){
            min=input[j];
            minIndex=j;
        }
    }
    //swap
    int temp=input[i];
    input[i]=input[minIndex];
    input[minIndex]=temp;
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

    selectionsort(input,n);
    
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }

    return 0;
}
