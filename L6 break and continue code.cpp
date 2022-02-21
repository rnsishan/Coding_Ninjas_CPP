//L6 break and continue code
#include <iostream>

using namespace std;

int main()
{
    int i=1;
    while(i<10){
        if(i==7){
            i++;    //this'll update i after it gets inside if
            continue;   //this skips 7
        }
        cout<<i<<endl;
        i++;
    }
    
    for(int j=1;j<10;j++){  //j gets incremented in this only
        if(j==7){
            continue;
        }
        cout<<j<<endl;
    }

    return 0;
}
