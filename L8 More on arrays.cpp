//L8 More on arrays
//largest element in array
#include <iostream>
#include<climits>   //this is for limits like int min
using namespace std;

int main()
{
    int n;
    cin>>n;
    int input[100];
    
     int i=0;
    while(n>i){
        cin>>input[i];
        i++;
    }
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }

    cout<<max<<endl;













    /*
    int input[50];  //do not to take a variable in the array size
                    //constant length ka lena hamesha
    int i=0;
    while(n>i){
        cin>>input[i];
        i++;
    }
    i=0;
    while(n>i){
        cout<<input[i];
        i++;
    }
    
*/


    return 0;
}
