//sum of even or odd
#include <iostream>

using namespace std;

int main()
{
    int n;
    int evensum=0,oddsum=0;
    cin>>n;
    int digit;
    while(n>0){
        digit=n%10;
        if(digit%2==0){
            evensum=evensum+digit;
        }
        else{
            oddsum=oddsum+digit;
       
            
        }
         n=n/10;
        
    }
    cout<<evensum<<" "<<oddsum<<endl;
    
    
}
