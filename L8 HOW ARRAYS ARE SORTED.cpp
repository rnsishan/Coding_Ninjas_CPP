//L8 HOW ARRAYS ARE SORTED
#include <iostream>

using namespace std;


void printarray(int input[],int n){
    
    //int x=sizeof(input)/sizeof(int); 
    //you cant use sizeof to figure out the size of array 
//using sizeof, cos it'll give you 8bytes as the size, as in c++ 
//it takes bytes to store an address from main fxn.
    //explicitly lena padega size of array
   
    for(int i=0;i<n;i++){
    cout<<input[i]<<endl;    
    }
    cout<<endl;
    
}
int main()
{
    
    //start of the lecture tells you about the array name and
    //the name of array points to first memory location.
    
    //sizeof discussed
    
    //arrays and functions
    int n;
    cin>>n;
    
    int input[100];
    
    cout<<"enter elements"<<endl;

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    printarray(input,n);
    
    
    
    return 0;
}




















