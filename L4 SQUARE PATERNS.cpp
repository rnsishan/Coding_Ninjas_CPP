//L4 SQUARE PATERNS various
#include <iostream>

using namespace std;

int main()
{
    /*int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
*/

    
   /*int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
     
  */
  int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=n;
        while(j)
        {
            cout<<j;    //keep cout n-j+1 and j=1, works same
            j--;
        }
        cout<<endl;
        i++; 
    }
    return 0;  
}
