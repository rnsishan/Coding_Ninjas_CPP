//good one.
//E DE CDE BCDE
#include <iostream>

using namespace std;

int main()
{
     int n;
    cin>>n;
    int i=1;
    char ch;
    
    while(i<=n){
    int j=1;
    char startchar=65+n-i;
    
    while(j<=i){
            cout<<startchar;
            j++;
            startchar++;
        }
    
	cout<<endl;
    i++;
    }
    
   /* while(i<=n){
    int j=1;
    
    while(j<=i){
    char startchar=65+n;
    
        ch=startchar-i+j-1; //startchar-i makes the first letter
            cout<<ch;       //j-1 increments the letters
            j++;    //extra use of ch and j-1 cos directly startchar ko 
            ch++;   //increment kar sakta hai tu.
        }
	cout<<endl;
    i++;
    }*/
    
    return 0;
}

