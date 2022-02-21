//cin and cin.get


//property of cin is that it ignores spaces and enter
//cin.get accepts everything
#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    int count=0;
    while(c!='$'){
        count++;
        //cin>>c;
        c=cin.get();
    }
    cout<< count<<endl;
//when you want tab and spaces enters to be counted then use cin.get
   
}
