//fibonacci series in function 
#include <iostream>

using namespace std;


bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    if(n==0 || n==1){
	cout<<"true";
 	exit(0);}
    
    int next,first=0,second=1;
         for(int i=0;i<=n;i++){
        next=first+second;
        first=second;
        second=next;
        if(first==n){
            return true;
        }
    }
    return false;
	
    
}

int main()
{   int n;
cin>>n;
    checkMember(n);

    return 0;
}
