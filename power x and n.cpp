#include <iostream>
#include<cmath>
using namespace std;

int main()
{double x,n;
 cin>>x>>n;
    if(x>=0 && x<=8 && n>=0 && n<=9){
   
    
    cout<<(int)pow(x,n)<<endl;  //typecasting is imp
    }

    return 0;
}

