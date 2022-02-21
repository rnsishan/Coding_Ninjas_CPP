
#include <iostream>

using namespace std;

int main()
{
   char c;
   c=cin.get(); 
    int lcount=0;
    int dcount=0;
    int spaces=0;
    while(c!='$'){
   
    if(c>='a' && c<='z'){          //97 && c<=122
        lcount++;
    }
    else if(c>='0' && c<='9'){        //c>=48 && c<=57
        dcount++;
        
    }
    else{
        spaces++;
    }
               
 c=cin.get(); //this eliminates extra spaces
    }
    cout<<lcount<<" "<<dcount<<" "<<spaces;
    


}

