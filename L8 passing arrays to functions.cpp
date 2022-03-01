//L8 passing arrays to functions
#include <iostream>

using namespace std;


void increment(int a,int b[],int n){
    a++;
    b[0]++; //the value at 0 does get incremented even if it wasn't 
            //updated in main. but a doesnt get incremented
}

int main()
{
    int a=10;
    int b[10]={1,2,3};
    increment(a,b,10);
    cout<<a<<endl;
    cout<<b[0]<<endl;
    
}
