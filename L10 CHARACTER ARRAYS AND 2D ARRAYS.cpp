// L10 CHARACTER ARRAYS AND 2D ARRAYS
//STRINGS ARE 1D CHARACTER ARRAYS
//YOU DONT NEED FOR LOOP TO ENTER CHARACTERS IN CHAR ARRAY
#include <iostream>

using namespace std;

int length(char input[]){
    
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    cin>>name;
    name[5]='\0'; //null value,iske aage nai jayega cos null value
                    //dedi hamne
    
    cout<<name<<endl;
    cout<< length(name)<<endl;

    return 0;
}
