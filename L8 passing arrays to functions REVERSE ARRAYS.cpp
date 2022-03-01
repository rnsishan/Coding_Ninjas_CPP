//L8 passing arrays to functions
//reverse arrays
//array me changes reflect ho jati hai islie return kuch nai krna hoga
//FIND UNIQUE PROGRAM IMP IN CODINGNINJAS
#include <iostream>

using namespace std;

void reverse(int input[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}


int main()
{
    int input[10]={1,2,3,4,5};
    reverse(input,5);
    for(int i=0;i<5;i++){
    cout<<input[i]<<endl;}

    return 0;
}
