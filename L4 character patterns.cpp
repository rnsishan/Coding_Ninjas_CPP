//character patterns
#include <iostream>

using namespace std;

int main()
{
   /* int n;  //ABCD BCDE CDEF DEFG
    cin>>n;
    int i=1;
    char k=65;
    while(i<=n)
    {   int j=1;
        while(j<=n){ 
            cout<<k;
            j++;
            k++;
        }
        k=65+i;
        cout<<endl;
        i++;
    }  
    */
    //or other method
    
    int n;  //ABCD BCDE CDEF DEFG       //simpler
    cin>>n;
    int i=1;
    while(i<=n)
    {   int j=1;
        char startchar='A'+i-1;
        while(j<=n){
        char ch= startchar +j-1;    
         cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    
    
    /*int n;  //ABCD ABCD ABCD ABCD
    cin>>n;
    int i=1;
    while(i<=n)
    {   int j=1;
        char k=65;
        while(j<=n){    //j<=n and char+j-1 will work same
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }  */  
    
    /*int n;        //A AB ABC ABCD
    cin>>n;
    int i=1;
    while(i<=n)
    {   int j=1;
        char k=65;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }*/
    return 0;
}
