//insertion sort
#include <iostream>

using namespace std;
/*
insertion sort me consider first element to be sorted,jab doosra 
element aya tab compare kar konsa chota,agar first ele is bigger
right shift kar and new element keep on the left of it, this'll be 
one round,waise hee saare elements check honge one by one.
THERES SHIFTING OF ELEMENTS,NOT SWAPPING
'i' would tell kis element ko correct pos pe rakhna hai
i th elemnt ko compare kisse karna hai 'j'will tell
j goes to i-1 to 0.
current will have ith  value
*/


void insertionsort(int input[],int n){
    
    for(int i=1;i<n;i++){
        int current=input[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<input[j]){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
         input[j+1]=current;
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
    
    insertionsort(input,n);
    
     for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    
}
