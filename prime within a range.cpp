//prime within a range
#include <iostream>

using namespace std;

int main()
{
    /*int num,i,count,n;
    cin>>n;
    for(num=1;num<=n;num++){
        count=0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                count++;
                break;
            }
        }
        if(count==0 && num!=1){
            cout<<num<<endl;
        }
    }
    */
    int i,j,n;
    cin>>n;
    for(i=2;i<n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
            
        }
        if(i==j){
            cout<<i<<endl;
        }
    }
                
            
            
        
    


    return 0;
}
