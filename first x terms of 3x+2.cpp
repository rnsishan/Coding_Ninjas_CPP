//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
#include <iostream>

using namespace std;

int main()
{
int n;
    cin>>n;
    
    if(n>=1 && n<=1000){
	int x=1;
	
        for(x=1;x<=n;x++){
            int flag=0;
            if((3*x+2)%4==0){
                flag=1;
               n++;
            }
            if(flag==0){
                cout<<(3*x+2)<<" ";
            }
                
        }
    
    }

    return 0;
}
